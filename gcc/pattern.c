#include <stdio.h>

int main() {
    
    int i, j;
    printf("Pattern using arrays");
    printf(" \n");
    for(i=1;i<=4;i++)
    {
        printf(" \n");
        for(j=1;j<=i;j++)
        {
            printf(" %d ", i);
        }

    }
    
    return 0;
}