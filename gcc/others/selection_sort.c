#include<stdio.h>
#include<conio.h>

int main()
{
    int a[10], i, j, n, temp;

    printf("\n");
    printf("\n");
    printf("----- Selection Sort -----");
    printf("\n");
    printf("Enter the no. of elements in array: ");
    scanf("%d", &n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    
    printf("\n");
    printf("\n");
    printf("--- OUTPUT ---\n");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    printf("Sorted array:");
    for(i=0;i<n;i++)
    {
        printf("\t%d", a[i]);
    }
    printf("\n");
    printf("\n");
    getch();
}