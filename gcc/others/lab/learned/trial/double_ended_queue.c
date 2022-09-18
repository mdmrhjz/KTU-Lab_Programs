#include<stdio.h>

int main()
{
    int repeat=1, ch, a[10], x, i, front=-1, rear=-1;

    do
    {
        printf("\n\n\tDOUBLE ENDED QUEUE\n");

        printf("\tMENU \n1.Insert left \n2.Insert right \n3. Delete left \n4.Delete right \n5.Display \n6.Exit \n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1: if(front==0)
                    {
                        printf("Insertion not possible!\n");
                    }
                    else if(front==-1)
                    {
                        front=rear=0;
                        printf("Enter an element: ");
                        scanf("%d", &x);
                        a[front]=x;
                    }
                    else
                    {
                        printf("Enter an element: ");
                        scanf("%d", &x);
                        front--;
                        a[front]=x;
                    }
                    break;

            case 2: if(rear==-1)
                    {
                        front=rear=0;
                        printf("Enter an element: ");
                        scanf("%d", &x);
                        a[rear]=x;
                    }
                    else if(rear==9)
                    {
                        printf("Insertion not possible!\n");
                    }
                    else
                    {
                        printf("Enter an element: ");
                        scanf("%d", &x);
                        rear++;
                        a[rear]=x;
                    }
                    break;

            case 3: if(front==-1)
                    {
                        printf("Nothing to detete, queue already empty\n");
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
                        front++;
                    }
                    break;

            case 4: if(rear==-1)
                    {
                        printf("Nothing to detete, queue already empty\n");
                    }
                    else if(front==rear)
                    {
                        x=a[rear];
                        printf("Deleting %d\n", x);
                        front=rear=-1;
                    }
                    else
                    {
                        x=a[rear];
                        printf("Deleting %d\n", x);
                        rear--;
                    }
                    break;

            case 5: if(front==-1 || rear==-1)
                        printf("Queue is empty, nothing to print\n");
                    else
                    {
                        for(i=front;i<=rear;i++)
                            printf("\t%d", a[i]);
                        printf("\n");
                    }
                    break;

            case 6: repeat=0;
                    break;

            default: printf("- Invalid Choice!\n");
                     break;
        }

    }while(repeat==1);
    
}