#include<stdio.h>

int main()
{
    int top=-1, repeat=1, ch, a[10], x, i;

    do
    {
        printf("\n\n\tSTACK\n");

        printf("\tMENU \n1.push \n2.pop \n3.display \n4.exit \n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1: if(top==9)
                    {
                        printf("\nStack is full!\n");
                    }
                    else
                    {
                        printf("\nEnter an element: ");
                        scanf("%d", &x);
                        top++;
                        a[top]=x;
                    }
                    break;

            case 2: if(top==-1)
                    {
                        printf("\nStack is already empty!\n");
                    }
                    else
                    {
                        x=a[top];
                        printf("\nDeleting %d\n", x);
                        top--;
                    }
                    break;

            case 3: if(a[top]==-1)
                        printf("\nStack is empty, nothing to print\n");
                    else
                    {
                        printf("\n");
                        for(i=top;i>=0;i--)
                        {
                            printf("\t%d", a[i]);
                        }
                    }
                    break;

            case 4: repeat=0;
                    break;

            default: printf("\nInvalid Choice!\n");
        }

    }while(repeat==1);
    
}