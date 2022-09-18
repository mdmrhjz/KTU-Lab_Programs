#include<stdio.h>

int main()
{
    int i, n, x, a[30], flag=0, first, last, mid;
    printf("\n\n\tBINARY SEARCH\n");
    printf("Enter the no. of elements: ");
    scanf("%d", &n);

    printf("\nEnter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);

    printf("\nEnter the element to search: ");
    scanf("%d", &x);

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
        if(x<a[mid])
        {
            last=mid-1;
        }
        if(x>a[mid])
        {
            first=mid+1;
        }
        mid=(first+last)/2;
    }

    printf("\n---> OUTPUT\n");
    if(flag==0)
        printf("Element not found\n");
    else
        printf("Element found at index No.: %d\n", mid);
    
    printf("\n");

}