#include<stdio.h>

void main()
{
    int i, a[10], j, n, x, first, last, flag=0, mid;

    printf("\n\n");
    printf("Enter the no. of elements: ");
    scanf("%d", &n);

    printf("Enter the elements in ascending order\n");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    
    printf("Enter the element to be searched: ");
    scanf("%d", &x);

    //binary search
    first=0;
    last=n-1;
    mid=(first+last)/2;
    while(first<=last)
    {
        if(a[mid]==x)
        {
            flag=1;
            break;
        }
        else if(a[mid]<x)
        {
            first=mid+1;
        }
        else
        {
            last=mid-1;
        }
        mid=(first+last)/2;
    }

    if(flag==1)
    {
        printf("Element found at index %d", mid);
    }
    else
    {
        printf("Element not found");
    }

}