#include<stdio.h>
#include<conio.h>

int main()
{
    int i, j, n, a[10], temp;
    printf("\n\n");
    printf("Enter the no. of elements: ");
    scanf("%d", &n);

    printf("Enter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    
    //sorting
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    //print
    printf("\n\n");
    printf("\t --- SORTED ARRAY ---\n");
    for(i=0;i<n;i++)
    {
        printf("\t%d", a[i]);
    }
    printf("\n");
    getch();
    return 0;
    
}