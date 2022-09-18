#include<stdio.h>
#include<stdlib.h>

struct node
{
    int coeff, exp;
    struct  node *next;
} *start=NULL, *temp, *current;

void insert(int deg, int coe)
{
    current=(struct node*) malloc(sizeof(struct node));
    current->coeff=coe;
    current->exp=deg;

    if(start==NULL)
    {
        current->next=NULL;
        start=current;
    }
    else
    {
        current->next=start;
        start=current;
    }
}

int display()
{
    if(start==NULL)
    {
        printf("- No polynomial is entered");
        return;
    }
    
    temp=start;

    while(temp!=NULL)
    {
        if(temp->coeff == 0)
        {
            temp=temp->next;
            continue;
        }
        else if(temp->coeff == 1)
        {

            printf("x^%d", temp->exp);
            if(temp->next!=NULL)
            {
                printf(" + ");
            }
            temp=temp->next;
        }
        else
        {
            printf("%dx^%d", temp->coeff, temp->exp);
            if(temp->next!=NULL)
            {
                printf(" + ");
            }
            temp=temp->next;
        }
    }
}

int main()
{
    int repeat=1, deg, coe;
    printf("\n\n\tPOLYNOMIAL EVALUAION\n");
    do
    {
        
        printf("Enter the degree: ");
        scanf("%d", &deg);
        printf("Enter the coefficient: ");
        scanf("%d", &coe);

        insert(deg, coe);

        printf("\nDo you want to enter next term? : (0-No / 1-Yes): ");
        scanf("%d", &repeat);
    }
    while(repeat==1);

    printf("\n---> OUTPUT\n");
    display();
    printf("\n");

}