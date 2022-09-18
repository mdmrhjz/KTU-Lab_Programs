#include<stdio.h>

int main()
{

    int i, j, a[020], n, temp, min, loc;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter he elements\n");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    
    for(i=0;i<n;i++)
    {
        min=a[i];
        loc=i;
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                min=a[j];
                loc=j;
            }

            if(i!=loc)
            {
                temp=a[i];
                a[i]=a[loc];
                a[loc]=temp;
            }
            printf("\t %d", a[i]);
            printf("\t %d", a[j]);
        }
        printf("\n");
    }
    
    
    
    
    return 0;
}