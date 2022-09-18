#include<stdio.h>

int main()
{
    int repeat=1, choice, dq[20], front=-1, rear=-1;

    do
    {
        printf("\tMENU\n");
        printf("1. INSERT LEFT\n");
        printf("2. INSERT RIGHT\n");
        printf("3. DELETE LEFT\n");
        printf("4. DELETE RIGHT\n");
        printf("5. EXIT\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: if(front==0)
                    {
                        printf("Insertion not possible!\n");
                    }
                    else if(front==-1)
                    {
                        printf("Enter an element: ");
                        front=rear=0;
                        scanf("%d", &dq[front]);
                    }
                    else
                    {
                        printf("Enter an element: ");
                        front--;
                        scanf("%d", &dq[front]);
                    }
                    break;

            case 2: if(rear==19)
                    {
                        printf("Insertion not possible!\n");
                    }
                    else if(rear==-1)
                    {
                        printf("Enter an element: ");
                        front=rear=0;
                        scanf("%d", &dq[rear]);
                    }
                    else
                    {
                        printf("Enter an element: ");
                        rear++;
                        scanf("%d", &dq[rear]);
                    }
                    break;

            case 3: if(front==-1)
                    {
                        printf("Deletion not possible as queue is empty\n");
                    }
                    else if(front==rear)
                    {
                        printf("Deleting %d from deque\n", dq[front]);
                        front=rear=-1;
                    }
                    else
                    {
                        printf("Removing %d from deque\n", dq[front]);
                        front++;
                    }
                    break;

            case 4: if(rear==-1)
                    {
                        printf("Deletion not possible as queue is empty\n");
                    }
                    else if(rear==front)
                    {
                        printf("Removing %d from deque\n", dq[rear]);
                        front=rear=-1;
                    }
                    else
                    {
                        printf("Removing %d from deque\n", dq[rear]);
                        rear--;
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