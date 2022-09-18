#include<stdio.h>

int main()
{
    int repeat=1, ch, a[10], x, i, front=-1, rear=-1;

    do
    {
        printf("\n\n\tQUEUE\n");

        printf("\tMENU \n1.Append \n2.Serve \n3. Display \n4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1: if(rear==9)
                    {
                        printf("\nQueue is full!\n");
                    }
                    else
                    {
                        if(front==-1)
                            front++;
                        printf("\nEnter an element: ");
                        scanf("%d", &x);
                        rear++;
                        a[rear]=x;
                    }
                    break;

            case 2: if(rear==-1)
                    {
                        printf("\nQueue is already empty!\n");
                    }
                    else if(front==rear)
                    {
                        x=a[front];
                        printf("\nDeleting %d\n", x);
                        rear=-1;
                        front=-1;
                    }
                    else
                    {
                        x=a[front];
                        printf("\nDeleting %d\n", x);
                        front++;
                    }
                    break;

            case 3: if(front==-1)
                        printf("\nQueue is empty, nothing to print\n");
                    else
                    {
                        printf("\n");
                        for(i=front;i<=rear;i++)
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