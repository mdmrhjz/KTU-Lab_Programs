#include<stdio.h>

int main()
{
    int a[10], n, value, first, last, mid, flag=0, i;

    printf("\n");
    printf("\n");
    printf("--->    BINARY SEARCH");
    printf("\n");
    printf("\n");
    printf("Enter the no. of elements: ");
    scanf("%d", &n);
    printf("\n");
    printf("- Enter the elements in increasing order\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n");

    //BINARY SEARCH
    printf("Enter the element to search: ");
    scanf("%d", &value);
    printf("\n");
    printf("\n");

    first=0;
    last=n-1;
    mid=(first+last)/2;
    while(1)
    {
        if(a[mid]==value)
        {
            flag=1;
            break;
        }
        else if(value<a[mid])
        {
            last=mid-1;
        }
        else
        {
            first=mid+1;
        }
        mid=(first+last)/2;
    }

    printf("----- OUTPUT -----\n");
    if(flag==0)
    {
        printf("Entered value is not present!");
    }
    else
    {
        printf("Entered value is found at index no. %d", mid);
    }
    printf("\n");
    return 0;

}