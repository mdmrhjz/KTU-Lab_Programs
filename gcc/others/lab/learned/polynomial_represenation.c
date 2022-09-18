#include<stdio.h>

int main()
{
    int i, j=-1, n, A[25];
    //Here "j" is used for counting degrees and coefficients, eg: degree 0, then coefficient 0...

    printf("\nEnter the no. of terms: ");
    scanf("%d", &n);

    if(n==0 || n>24)
    {
        printf("Error!, No. of terms too low or high\n");
        return;
    }

    printf("\n-- Enter polynomial details --\n");

    for(i=0;i<2*n;i++)
    {
        if(i%2==0)
        {
            j++;
            printf("Enter degree %d: ", j);
        }
        else
            printf("Enter coefficient %d: ", j);
        
        scanf("%d", &A[i]);
    }

    printf("\n--- Polynomial: ");
    i=0;
    while(i<2*n-1)
    {
        if(A[i+1]==1)
            printf("x^%d", A[i]);
        else if(A[i+1]==0)
        {
            i=i+2;
            continue;
        }
        else
            printf("%dx^%d", A[i+1], A[i]);

        //Print "+" after each term except the last one
        if(i<2*n-2)
        {
            printf(" + ");
        }
        i=i+2;
    }
    printf("\n");
    
}