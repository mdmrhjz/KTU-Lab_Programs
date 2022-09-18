#include<stdio.h>

int top=-1, i, j;
char infix[20], postfix[20], a[20];

int push(char val)
{
    top++;
    a[top]=val;
}

int pop()
{
    top--;
}

int priority(char val)
{
    if(val=='+' || val=='-')
        return 1;
    else if(val =='*' || val=='/')
        return 2;
    else if(val=='^')
        return 3;
    else
        return 0;
}



int main()
{
    //char infix[20], postfix[20];

    printf("\n\n\tINFIX TO POSTFIX\n");
    printf("Enter the infix operation: ");
    scanf("%s", infix);
    printf("Enterered infix operation: %s\n", infix);

    push('#');

    for(i=0,j=0;infix[i]!='\0';i++)
    {
        if(isalnum(infix[i]))
        {
            postfix[j++]=infix[i];
        }
        else if(infix[i]=='(')
        {
            push(infix[i]);
        }
        else if(infix[i]==')')
        {
            while(a[top]!='(')
            {
                postfix[j++]=a[top];
                pop();
            }
            pop();
        }
        else
        {
            if(priority(infix[i]) > priority(a[top]))
            {
                push(infix[i]);
            }
            else
            {
                while(priority(infix[i]) <= priority(a[top]))
                {
                    if(a[top]=='#')
                        break;
                    postfix[j++]=a[top];
                    pop();
                }
                push(infix[i]);
            }
        }
    }

    while(a[top]!='#')
    {
        postfix[j++]=a[top];
        pop();
    }

    printf("\n--- OUTPUT\n");
    printf("Postfix operation: ");
    for(i=0;postfix[i]!='\0';i++)
    {
        printf("%c", postfix[i]);
    }
    printf("\n");


}