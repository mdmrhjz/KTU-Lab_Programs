#include<stdio.h>

int merge(int a[], int first, int mid, int last)
{
    int k, i, j, b[20];
    i=k=first;
    j=mid+1;

    while(i<=mid && j<=last)
    {
        if(a[i]<=a[j])
        {
            b[k]=a[i];
            k++;
            i++;
        }
        else
        {
            b[k]=a[j];
            k++;
            j++;
        }
    }

    while(i<=mid)
    {
        b[k]=a[i];
        k++;
        i++;
    }

    while(j<=last)
    {
        b[k]=a[j];
        k++;
        j++;
    }

    for(i=0;i<=last;i++)
    {
        a[i]=b[i];
    }

}

int mergesort(int a[], int first, int last)
{
    int mid;
    if(first<last)
    {
        mid=(first+last)/2;
        mergesort(a, first, mid);
        mergesort(a, mid+1, last);
        merge(a, first, mid, last);
    }
}

int main()
{
    int n, a[20], i, first, last;
    printf("\n\n\tMERGE SORT\n");
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("\nEnter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    first=0;
    last=n-1;
    mergesort(a, first, last);

    printf("\n--- OUTPUT\n");
    for(i=0;i<n;i++)
        printf("\t%d", a[i]);
    printf("\n");
}