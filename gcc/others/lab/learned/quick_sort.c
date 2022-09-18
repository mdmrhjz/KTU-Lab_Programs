#include<stdio.h>

int quicksort(int A[], int first, int last)
{
    int i, j, temp, pivot;
    if(first<last)
    {
        do
        {
            pivot=first;

            for(i=first;i<=last;i++)
            {
                if(A[i]>A[pivot])
                {
                    break;
                }
            }

            for(j=last;j>first;j--)
            {
                if(A[j]<=A[pivot])
                {
                    break;
                }
            }

            if(i<j)
            {
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
            else
            {
                temp=A[pivot];
                A[pivot]=A[j];
                A[j]=temp;
            }

        }while(i<j);
        quicksort(A, first, j-1);
        quicksort(A, j+1, last);
    }
}

int main()
{
    int A[10], B[10], n, i, first=0, last;

    printf("\n\n\tQUICK SORT\n");
    printf("Enter the no. of elements: ");
    scanf("%d", &n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &A[i]);
    }
    last=n-1;

    quicksort(A, first, last);

    printf("\n--- SORTED ARRAY ---\n");
    for(i=0;i<n;i++)
        printf("\t%d", A[i]);
    printf("\n");

}