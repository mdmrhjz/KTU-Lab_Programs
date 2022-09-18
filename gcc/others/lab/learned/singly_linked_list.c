#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
} *ptr, *start=NULL, *ptr1;

void insert_beg()
{
    int num;
    ptr=(struct node*) malloc(sizeof(struct node));
    printf("Enter a value: ");
    scanf("%d", &num);
    ptr->data=num;

    if(start==NULL)
    {
        ptr->next=NULL;
        start=ptr;
    }
    else
    {
        ptr->next=start;
        start=ptr;
    }
    printf("\n");
}

int insert_pos()
{
    int num, pos, i;
    ptr=(struct node*) malloc(sizeof(struct node));
    printf("Enter a value: ");
    scanf("%d", &num);
    ptr->data=num;

    printf("Enter the position (starting from 1): ");
    scanf("%d", &pos);

    if(start==NULL)
    {
        ptr->next=NULL;
        start=ptr;
    }
    else
    {
        ptr1=start;
        for(i=1;i<pos-1;i++)
        {   
            if(ptr1->next!=NULL)
            {
                ptr1=ptr1->next;
            }
            else
            {
                printf("Invalid position!\n");
                return;
            }
        }
        if(pos==1)
        {
            ptr->next=start;
            start=ptr;
        }
        else
        {
            ptr->next=ptr1->next;
            ptr1->next=ptr;
        }
    }
    printf("\n");
}

void insert_end()
{
    int num;
    ptr=(struct node*) malloc(sizeof(struct node));
    printf("Enter a value: ");
    scanf("%d", &num);
    ptr->data=num;
    ptr->next=NULL;

    if(start==NULL)
    {
        start=ptr;
    }
    else
    {
        ptr1=start;
        while(ptr1->next!=NULL)
        {
            ptr1=ptr1->next;
        }
        ptr1->next=ptr;
        ptr=start;
    }
}

void display()
{
    if(start==NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        ptr=start;
        while(ptr!=NULL)
        {
            printf("\t%d", ptr->data);
            ptr=ptr->next;
        }
        printf("\n");
    }
}

void delete_beg()
{
    if(start==NULL)
    {
        printf("Nothing to delete, already empty.\n");
    }
    else
    {
        ptr=start;
        printf("Deleting %d\n", ptr->data);
        start=start->next;
        free(ptr);
    }
}

void delete_pos()
{
    int i, pos;
    if(start==NULL)
    {
        printf("Nothing to delete, already empty.\n");
    }
    else
    {
        printf("Enter position to delete (from 1): ");
        scanf("%d", &pos);
        ptr=start;
        for(i=1;i<pos-1;i++)
        {
            if(ptr->next!=NULL)
            {
                ptr=ptr->next;
            }
        }
        if(pos==1)
        {
            start=start->next;
            printf("Deleting %d\n", ptr->data);
            free(ptr);
        }
        else
        {
            ptr1=ptr->next->next;
            free(ptr->next);
            ptr->next=ptr1;
        }
    }
}

void delete_end()
{
    if(start==NULL)
    {
        printf("Nothing to delete, already empty.\n");
    }
    else
    {
        ptr=start;
        while(ptr->next->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr1=ptr->next;
        printf("Deleting %d\n", ptr1->data);
        ptr->next=NULL;
        free(ptr1);
    }
}

int main()
{
    int repeat=1, i, choice;
    do
    {
        printf("\n\tMENU \n1.Insert at beg \n2.Insert at pos \n3.Insert at end \n4.Display \n5.delete at beg \n6.delete at pos \n7.delete at end \n8.Exit \n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        printf("\n");
        switch(choice)
        {
            case 1: insert_beg();
                    break;

            case 2: insert_pos();
                    break;

            case 3: insert_end();
                    break;

            case 4: display();
                    break;

            case 5: delete_beg();
                    break;

            case 6: delete_pos();
                    break;

            case 7: delete_end();
                    break;

            case 8: repeat=0;
                    break;

            default: printf("Invalid choice!\n");
                     break;
        }
    }
    while(repeat==1);

}