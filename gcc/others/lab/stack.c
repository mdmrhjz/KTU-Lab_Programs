#include<stdio.h>

int main()
{
    int top=-1, stack[10], choice, repeat=1;
    do
    {
        printf("\t --- MENU ---\n");
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. MAKE EMPTY/NULL\n");
        printf("4. STACK FULL?\n");
        printf("5. STACK EMPTY?\n");
        printf("6. Exit\n\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("\n");
        switch(choice)
        {
            case 1: if(top==10)
                    {
                        printf("Stack overflow\n");
                    }
                    else
                    {
                        printf("Enter the input value: ");
                        top++;
                        scanf("%d", &stack[top]);
                    }
                    break;
            
            case 2: if(top==-1)
                    {
                        printf("Stack underflow\n");
                    }
                    else
                    {
                        printf("Removing %d from stack\n", stack[top]);
                        top--;
                    }
                    break;

            case 3: if(top!=-1)
                    {
                        top=-1;
                        printf("Stack made empty\n");
                    }
                    break;

            case 4: if(top==10)
                    {
                        printf("True\n");
                    }
                    else
                    {
                        printf("False\n");
                    }
                    break;

            case 5: if(top==-1)
                    {
                        printf("True\n");
                    }
                    else
                    {
                        printf("False\n");
                    }
                    break;

            case 6: repeat=0;
                    break;

            default: printf("Invalid Choice\n");
                     break;

        }

    }
    while(repeat==1);

}