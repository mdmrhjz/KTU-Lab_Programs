#include<stdio.h>

int sort(int A[], int low ,int high)
{
    int pos;
    if(low<high)    //To check if elements is left to be sorted.
    {
        pos=partition(A, low, high);
        sort(A, low, pos-1);
        sort(A, pos+1, high);
    }
}

int partition(int A[], int low ,int high)
{
    int i, j, temp, pivot;

    do
    {
        pivot=low;
        i=low;
        j=high;

        for(i=low;i<=high;i++)
        {
            if(A[i]>A[pivot])
            {
                break;
            }
        }

        for(j=high;j>low;j--)
        {
            if(A[j]<=A[pivot])
            {
                break;
            }
        }

        if(i<j)     //To check if i and j overlap on first loop
        {
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
        else
        {
            temp=A[j];
            A[j]=A[pivot];
            A[pivot]=temp;
        }

    }
    while(i<j);     //To check if i and j overlap on remaining loop
    return j;
}


int main()
{
    int A[10], n, i, low=0, high;

    printf("\n\n\tQUICK SORT\n");
    printf("Enter the no. of elements: ");
    scanf("%d", &n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &A[i]);
    }
    high=n-1;

    sort(A, low, high);

    for(i=0;i<n;i++)
        printf("\t %d", A[i]);
}