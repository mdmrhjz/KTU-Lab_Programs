#include<stdio.h>

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