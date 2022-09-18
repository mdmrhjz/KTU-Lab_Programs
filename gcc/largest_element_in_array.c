#include <stdio.h>

int biggest(int [], int);

int main() {
    
    int a[50], n, i, largest;
    printf("--> Find the largest number in an array");
    printf(" \n");
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements of array \n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    largest=biggest(a, n);
    printf("\nLargest value of array = %d", largest);

    return 0;
}
    
int biggest(int *p, int b)
{
    int i, largest;
    largest=*p;
    for(i=1;i<b;i++)
    {
        if(*(p+i)>largest)
            largest=*(p+i);
    }
    return largest;
}