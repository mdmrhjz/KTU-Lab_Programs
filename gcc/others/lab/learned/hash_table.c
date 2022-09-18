#include<stdio.h>

int main()
{
    int a[20], b[20], n, x, i, k, flag=0, repeat;
    printf("\n\n\tHASH TABLE\n");
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        b[i]=0;
    }

    printf("\nEnter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &x);
        k=x%n;
        while(b[k]!=0)
            k=(k+1)%n;
        
        a[k]=x;
        b[k]=1;
    }

    printf("\n--- HASH TABLE\n");
    for(i=0;i<n;i++)
    {
        printf("\t%d", a[i]);
    }
    printf("\n");

    do
    {
        printf("\nEnter an element to search: ");
        scanf("%d", &x);
        k=x%n;

        while(a[k]!=x)
            k=(k+1)%n;

        if(a[k]==x)
        {
            printf("----> Element found at index: %d\n", k);
        }
        else
        {
            printf("----> Element not found\n");
        }

        printf("\nDo you want to search again (1-Yes/2-No): ");
        scanf("%d", &repeat);
        printf("\n");

    }while(repeat==1);

}