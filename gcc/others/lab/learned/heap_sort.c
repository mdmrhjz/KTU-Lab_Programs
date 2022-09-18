#include<stdio.h>

int heapify(int a[], int n, int i)
{
    int left, right, largest, temp;

    largest=i;
    left=(i*2)+1;
    right=(i*2)+2;

    if(left<n && a[left]>a[largest])
    {
        largest=left;
    }

    if(right<n && a[right]>a[largest])
    {
        largest=right;
    }

    if(largest!=i)
    {
        temp=a[i];
        a[i]=a[largest];
        a[largest]=temp;

        heapify(a, n, largest);
    }

}


int heapsort(int a[], int n)
{
    int temp, i;

    for(i=n/2-1;i>=0;i--)
    {
        heapify(a, n, i);
    }

    for(i=n-1;i>=0;i--)
    {
        temp=a[0];
        a[0]=a[i];
        a[i]=temp;

        heapify(a, i, 0);
    }

}


int main()
{
    int n, i, a[30];

    printf("\n\n\tHEAP SORT\n");
    printf("Enter the no. of elements: ");
    scanf("%d", &n);

    printf("\nEnter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);

    heapsort(a, n);

    for(i=0;i<n;i++)
    {
        printf("\t%d", a[i]);
    }
    printf("\n");
}