#include<stdio.h>

int main()
{
    int i, terms, a[30], j=0;

    printf("\n\n\tPOLYNOMIAL REPRESENTATION\n");
    printf("\nEnter the no. of terms: ");
    scanf("%d", &terms);

    if(terms==0 || terms>29)
    {
        printf("Error!, No. of terms too low or high\n");
        return;
    }

    for(i=0;i<2*terms;i++)
    {
        if(i%2==0)
        {
            j++;
            printf("\nEnter the coefficient %d: ", j);
        }
        else
        {
            printf("Enter the degree %d: ", j);
        }
        scanf("%d", &a[i]);
    }

    printf("\n--- OUTPUT\n");
    for(i=0;i<2*terms;i=i+2)
    {
        if(a[i]==0)
        {
            continue;
        }
        else if(a[i]==1)
        {
            printf("x^%d", a[i+1]);
        }
        else
        {
            printf("%dx^%d", a[i] ,a[i+1]);
        }

        if(i<2*terms-2)
            printf(" + ");
    }

    printf("\n");

}