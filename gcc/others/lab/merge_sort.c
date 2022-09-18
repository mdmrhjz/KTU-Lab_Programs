#include<stdio.h>

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

int merge(int a[], int first, int mid, int last)
{
    int i, j, k, temp[20];
    i=k=first;
    j=mid+1;

    while(i<=mid && j<=last)
    {
        if(a[i]<=a[j])
        {
            temp[k]=a[i];
            k++;
            i++;
        }
        else
        {
            temp[k]=a[j];
            k++;
            j++;
        }
    }

    while(i<=mid)
    {
        temp[k]=a[i];
        k++;
        i++;
    }

    while(j<=last)
    {
        temp[k]=a[j];
        k++;
        j++;
    }

    for(i=first;i<=last;i++)
    {
        a[i]=temp[i];
    }
}

int main()
{
    int i, n, a[20], first, last;

    printf("\n\n\tMERGE SORT\n");
    printf("Enter the no. of elements: ");
    scanf("%d", &n);

    printf("\nEnter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);

    first=0;
    last=n-1;
    mergesort(a, first, last);

    printf("\n--- SORTED ARRAY\n");
    for(i=0;i<n;i++)
        printf("\t%d", a[i]);

    printf("\n");
}