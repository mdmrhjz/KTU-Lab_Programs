#include<stdio.h>

int main()
{
    int repeat=1, ch, max=10, a[max], x, i, front=-1, rear=-1;

    do
    {
        printf("\n\n\tDOUBLE ENDED QUEUE\n");

        printf("\tMENU \n1. Insert \n2. Delete \n3. Display \n4. Exit \n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1: if(front==rear+1 || (rear==9 && front==0))
                    {
                        printf("Queue is full, cannot insert\n");
                    }
                    else
                    {
                        if(front==-1)
                            front=(front+1)%max;
                        printf("Enter an element: ");
                        scanf("%d", &x);
                        rear=(rear+1)%max;
                        a[rear]=x;
                    }
                    break;


            case 2: if(front==-1 || rear==-1)
                    {
                        printf("Queue is already empty, cannot delete\n");
                    }
                    else if(front==rear)
                    {
                        x=a[front];
                        printf("Deleting %d\n", x);
                        front=rear=-1;
                    }
                    else
                    {
                        x=a[front];
                        printf("Deleting %d\n", x);
                        front=(front+1)%max;                        
                    }
                    break;

            case 3: if(front==-1 || rear==-1)
                    {
                        printf("Queue is empty, nothing to print\n");
                    }
                    else
                    {
                        i=front;
                        do
                        {
                            printf("\t%d", a[i]);
                            i=(i+1)%max;
                        }while(i!=rear+1);
                    }
                    break;

            case 4: repeat=0;
                    break;

            default: printf("- Invalid Choice!\n");
                     break;
        }

    }while(repeat==1);

}