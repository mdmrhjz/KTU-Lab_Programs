#include<stdio.h>

quicksort(int a[], int first, int last)
{
    int i, j, pivot, temp;
    if(first<last)
    {

        do
        {
            pivot=first;
            for(i=first;i<=last;i++)
            {
                if(a[i]>a[pivot])
                {
                    break;
                }
            }

            for(j=last;j>first;j--)
            {
                if(a[j]<=a[pivot])
                {
                    break;
                }
            }

            if(i<j)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            else
            {
                temp=a[j];
                a[j]=a[pivot];
                a[pivot]=temp;
            }

        }while(i<j);

        quicksort(a, first, j-1);
        quicksort(a, j+1, last);
        
    }
}

int main()
{
    int i, n, a[20], first, last;

    printf("\n\n\tQUICK SORT\n");
    printf("Enter the no. of elements: ");
    scanf("%d", &n);

    printf("Enter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);

    first=0;
    last=n-1;
    quicksort(a, first, last);

    for(i=0;i<n;i++)
        printf("\t%d", a[i]);


}