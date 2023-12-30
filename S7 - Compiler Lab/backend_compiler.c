#include<stdio.h>
#include<string.h>

int main()
{
    int i, j;
    char icode[10][10], op, operand[10];

    printf("\n\t --- BACKEND COMPILER ---\n");
    printf("\nEnter the intermediate code (terminated by exit)\n");
    
    i=0;
    do
    {
        scanf("%s", icode[i]);
    } while(strcmp(icode[i++], "exit") != 0);

    printf("\n -> OUTPUT");
    i=0;
    while(strcmp(icode[i], "exit") != 0)
    {
        op=icode[i][3];

        switch(op)
        {
            case '+':
                    strcpy(operand, "ADD");
                    break;
            case '-':
                    strcpy(operand, "SUB");
                    break;
            case '*':
                    strcpy(operand, "MUL");
                    break;
            case '/':
                    strcpy(operand, "DIV");
                    break;
            default:
                    printf("\n Warning: Invald Format Detected!\n Aborting...\n");
                    return 0;
                    break;
        }

        printf("\n\tMOV R%d, %c", 0, icode[i][2]);
        printf("\n\tMOV R%d, %c", 1, icode[i][4]);
        printf("\n\t%s R%d, R%d", operand, 0, 1);
        printf("\n\tMOV %c, R%d", icode[i][0], 0);

        i++;
    }

    printf("\n");
    return 0;
}