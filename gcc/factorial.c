#include <stdio.h>

int MyFact(int value)
{
    if(value>=0)
    {
        int numfact=1, i;
        for(i=1;i<=value;i++)
        {
            numfact=numfact*i;
        }
        return numfact;
    }
    else
    {
        int flag;
        flag=-1;
        return flag;
    }
}

int main() {
    
    int value, fact;
    printf("---> Find Factorial \n");
    printf("Enter a value: ");
    scanf("%d", &value);
    fact=MyFact(value);
    if (fact==-1)
    {
        printf("Math Error!");
    }
    else
    {
        printf("Factorial value: %d", fact);
    }

    return 0;
}