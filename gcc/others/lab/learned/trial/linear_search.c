#include<stdio.h>

int main()
{
    int i, n, x, a[30], flag=0;
    printf("\n\n\tLINEAR SEARCH\n");
    printf("\nEnter the no. of elements: ");
    scanf("%d", &n);

    printf("\nEnter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);

    printf("\nEnter the element to search: ");
    scanf("%d", &x);

    for(i=0;i<n;i++)
    {
        if(x==a[i])
        {
            flag=1;
            break;
        }
    }

    printf("\n---> OUTPUT\n");
    if(flag==0)
        printf("Element not found\n");
    else
        printf("Element found at %d\n", i);
    
    printf("\n");

}