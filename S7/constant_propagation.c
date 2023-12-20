#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

struct values
{
    char op1[10], op2[10], op[10], res[10];
    int flag;
} inputs[10];

int main()
{
    int i, j, n, op1, op2, res;
    char op, res1[10];

    printf("\n\n\t --- CONSTANT PROPAGATION ---\n");

    printf("\nEnter the number of equations: ");
    scanf("%d", &n);
    printf("\n(Format: operand    operator1    operator2    result) \n(Eg: + z x w1)\n\nEnter the input below\n");

    for(i=0; i<n; i++)
    {
        scanf("%s", inputs[i].op);
        scanf("%s", inputs[i].op1);
        scanf("%s", inputs[i].op2);
        scanf("%s", inputs[i].res);
        inputs[i].flag=0;
    }

    for(i=0; i<n; i++)
    {
        op1=atoi(inputs[i].op1);
        op2=atoi(inputs[i].op2);
        
        if((isdigit(op1) && isdigit(op2)) || strcmp(inputs[i].op, "=") == 0)
        {
            op=inputs[i].op[0];

            switch(op)
            {
                case '+':
                        res=op1+op2;
                        break;
                case '-':
                        res=op1-op2;
                        break;
                case '*':
                        res=op1*op2;
                        break;
                case '/':
                        res=op1/op2;
                        break;
                case '=':
                        res=op1;
                        break;
                default: 
                        printf("\n Invalid Operator!\n Aborting...\n");
                        exit(1);
                        break;
            }

            inputs[i].flag=1;
            sprintf(res1, "%d", res);

            for(j=i+1; j<n; j++)
            {
                if(strcmp(inputs[i].res, inputs[j].op1) == 0)
                    strcpy(inputs[j].op1, res1);
                else if(strcmp(inputs[i].res, inputs[j].op2) == 0)
                    strcpy(inputs[j].op2, res1);
            }

        }
    }

    printf("\n-> OUTPUT");
    for(i=0; i<n; i++)
    {
        if(inputs[i].flag != 1)
        {
            printf("\n");
            printf("\t%s", inputs[i].op);
            printf("\t%s", inputs[i].op1);
            printf("\t%s", inputs[i].op2);
            printf("\t%s", inputs[i].res);
        }
    }

    printf("\n");
    return 0;

}
