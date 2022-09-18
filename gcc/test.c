#include <stdio.h>
//CSE S3 33 MDMR
int main()
{
        int a[10], b[10], c[10], m, n, k, k1, i, j, x;
        printf("\n\tPolynominal Addition\n");
        printf("\t======================\n");
        printf("\n\tEnter the no. of terms of the polynomial: ");
        scanf("%d", &m);
        printf("\n\tEnter the degrees and coefficients: ");
        for(i=0;i<2*m;i++)
        {
                scanf("%d", &a[i]);
        }
        printf("\n\tFirst polynomial is: ");
        k1=0;
        if(a[k1+1]==1)
                printf("x^%d", a[k1]);
        else
                printf("%dx^%d", a[k1+1], a[k1]);

        k1+=2;
        while(k1<i)
        {
                printf("%dx^%d", a[k1+1], a[k1]);
                k1+=2;
        }
}