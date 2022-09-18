#include<stdio.h>

int max=5;
int count=0;
int insert_c(int q[], int rear)
{
        if(count==max)
                printf("Circular Queue is full\n");
        else
        {
                printf("Enter the number: ");
                rear=(rear+1)%max;
                scanf("%d", &q[rear]);
                count++;
        }
        return (rear);
}

int delete_c(int q[], int front)
{
        if(count==0)
                printf("Circular Queue is empty\n");
        else
        {
                printf("Deleted no. is %d", q[front]);
                front=(front+1)%max;
                count--;
        }
        return (front);
}

void display_c(int q[], int front)
{
        int i, j;
        if(count==0)
                printf("Circular Queue is empty\n");
        else
        {
                for(i=front, j=0;j<count;j++)
                {
                        printf("%d\n", q[i]);
                        i=(i+1)%max;
                }
        }
}

int main()
{
        int queue[max], rear=-1, front=0, choice, doexit=0;
        do
        {
                printf("\n");
                printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n - Choice: ");
                scanf("%d", &choice);
                switch(choice)
                {
                        case 1: rear=insert_c(queue, rear);
                                break;
                        case 2: front=delete_c(queue, front);
                                break;
                        case 3: display_c(queue, front);
                                break;
                        case 4: doexit=1;
                                break;
                        default: printf("Invalid choice");
                }
        }while(doexit==0);
}