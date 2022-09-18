#include<stdio.h>

int sort(int a[], int n)
{
    int i, j, temp;
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;

        while(j>=0 && a[j]>=temp)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
}

int main()
{
    int a[20], i, n;

    printf("\n\n\tINSERTION SORT\n");
    printf("Enter the no. of elements: ");
    scanf("%d", &n);

    printf("\nEnter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);

    sort(a, n);

    printf("\n---> SORTED ARRAY\n");
    for(i=0;i<n;i++)
    {
        printf("\t%d", a[i]);
    }
    printf("\n");

}