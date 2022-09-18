#include<stdio.h>

int main()
{
    int front=-1, rear=-1, q[5], choice, repeat=1, size=5, x;

    do
    {

        printf("\t MENU\n");
        printf("1. append\n");
        printf("2. serve\n");
        printf("3. queue empty?\n");
        printf("4. queue full?\n");
        printf("5. exit\n\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: if(rear==-1)
                    {
                        printf("Enter the element: ");
                        rear=front=0;
                        scanf("%d", &x);
                        q[rear]=x;
                    }
                    else if(rear==size)
                    {
                        printf("Queue is full\n");
                    }
                    else
                    {
                        rear++;
                        scanf("%d", &x);
                        q[rear]=x;
                    }
                    break;

            case 2: if(front==-1)
                    {
                        printf("Queue is already empty\n");
                    }
                    else if(front==rear)
                    {
                        printf("Removing %d\n", q[front]);
                        front=rear=-1;
                    }
                    else
                    {
                        printf("Removing %d\n", q[front]);
                        front++;
                    }
                    break;

            case 3: if(front==-1)
                    {
                        printf("Queue is empty\n");
                    }
                    break;

            case 4: if(rear==size)
                    {
                        printf("Queue is full\n");
                    }
                    break;

            case 5: repeat=0;
                    break;

            default: printf("Invalid choice\n");
                     break;

        }

    }while(repeat==1);

    return 0;
}