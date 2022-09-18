#include<stdio.h>

int main()
{
    int i, j, n, temp, a[30];
    printf("\n\n\tBUBBLE SORT\n");
    printf("Enter the no. of elements: ");
    scanf("%d", &n);

    printf("\nEnter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    printf("\n---> OUTPUT\n");
    for(i=0;i<n;i++)
        printf("\t%d", a[i]);
    
    printf("\n");

}