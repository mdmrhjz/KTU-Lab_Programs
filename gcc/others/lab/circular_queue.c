#include<stdio.h>

int main()
{
    int choice, repeat=1, front=-1 ,rear=-1, count=0, size=5, cq[5], i, j;

    do
    {

        printf("\tMENU\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n\n");

        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: if(count==size)
                    {
                        printf("Queue is full\n");
                    }
                    else
                    {
                        if(front==-1)
                        {
                            front=0;
                        }
                        rear=(rear+1)%size;
                        printf("Enter the element: ");
                        scanf("%d", &cq[rear]);
                        count++;
                    }
                    break;

            case 2: if(count==0)
                    {
                        printf("Nothing to remove, Queue is empty\n");
                    }
                    else
                    {
                        printf("Removing %d\n", cq[front]);
                        front=(front+1)%size;
                        count--;
                    }
                    break;

            case 3: printf("Printing the elements\n");
                    for(i=front,j=0;j<count;j++)
                    {
                        printf("\t%d", cq[i]);
                        i=(i+1)%size;
                    }
                    printf("\n\n");
                    break;

            case 4: repeat=0;
                    break;

            default: printf("Invalid choice\n");
                     break;

        }

    }while(repeat==1);

    return 0;
}