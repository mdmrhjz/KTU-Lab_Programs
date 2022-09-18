#include<stdio.h>

void main()
{
    int i, n, x, a[10], flag=0;

    printf("\n\n");
    printf("Enter the no. of elements: ");
    scanf("%d", &n);

    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &x);

    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            flag=1;
            break;
        }
    }

    if(flag==1)
    {
        printf("Element is found at index number %d", i);
    }
    else
    {
        printf("Element is not found");
    }
}