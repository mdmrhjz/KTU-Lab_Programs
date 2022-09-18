#include<stdio.h>

int main()
{
    int x, a[10], top=-1, ch, choice=1, maxvalue=-20, i;
    do
    {
        printf("\n");
        printf("\n");
        if(maxvalue<0)
        {
            printf("\n");
            printf("Enter the stack limit/size (from 0): ");
            scanf("%d", &maxvalue);
        }
        printf("\n");
        printf("\n");
        printf("\t\tMENU\n\t1.PUSH\n\t2.POP\n\t3.MAKE NULL/EMPTY\n\t4.STACK FULL?\n\t5.STACK EMPTY?\n\t6.PRINT FULL STACK\n\t7.CHANGE STACK LIMIT\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        printf("\n");

        switch(ch)
        {
            case 1: printf("Enter a value: ");
                    scanf("%d", &x);

                    if(top==maxvalue)
                    {
                        printf("-> Stack Overflow!");
                    }
                    else
                    {
                        top=top+1;
                        a[top]=x;
                    }
                    break;

            case 2: if(top==-1)
                    {
                        printf("-> Stack Underflow!");
                    }
                    else
                    {
                        printf("-> Removing %d", a[top]);
                        top=top-1;
                    }
                    break;
            
            case 3: top=-1;
                    printf("-> Making stack empty");
                    break;

            case 4: if(top==maxvalue)
                    {
                        printf("-> True");
                    }
                    else
                    {
                        printf("-> False");
                    }
                    break;

            case 5: if(top==-1)
                    {
                        printf("-> True");
                    }
                    else
                    {
                        printf("-> False");
                    }
                    break;

            case 6: if(top>-1)
                    {
                        printf("->");
                        for(i=0;i<=top;i++)
                        {
                            printf("\t%d", a[i]);
                        }
                        break;
                    }
                    else
                    {
                        printf("-> Stack Underflow!");
                    }
                    break;

            case 7: printf("Enter stack limit/size: ");
                    scanf("%d", &maxvalue);
                    if(top>maxvalue)
                    {
                        top=maxvalue;
                    }
                    break;

            default: printf("Invalid Choice!!!");
                    break;
        }

        printf("\n");
        printf("\n");
        printf("DO YOU WANT TO CONTINUE ?\n");
        printf("1 -> yes,    0 -> no\nChoice: ");
        scanf("%d", &choice);

    }while(choice==1);
    return 0;
}