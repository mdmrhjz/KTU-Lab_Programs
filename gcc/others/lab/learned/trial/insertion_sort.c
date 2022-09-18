#include<stdio.h>

int main()
{
    int a[20], i, n, j, temp;
    printf("\n\n\tINSERTION SORT\n");
    printf("Enter the no. of elements: ");
    scanf("%d", &n);

    printf("\nEnter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);

    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;

        while(a[j]>temp && j>=0)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }

    printf("\n--- OUTPUT\n");
    for(i=0;i<n;i++)
        printf("\t%d", a[i]);
    printf("\n");
}