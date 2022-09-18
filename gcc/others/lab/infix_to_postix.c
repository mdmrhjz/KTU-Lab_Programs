#include<stdio.h>

char stk[50], topcurrent, infix[50], postfix[50];
int i, count=0, top=-1, j;

int stk_push(char val)
{
    top++;
    stk[top]=val;
}

int stk_pop()
{
    top--;
    topcurrent=stk[top];
}

int priority(char val)
{
    if(val == '+' || val == '-')
        return 1;
    else if(val == '*' || val == '/')
        return 2;
    else if(val == '^')
        return 3;
    else
        return 0;
}

int main()
{

    printf("Enter the infix operation: ");
    scanf("%s", infix);
    printf("Your infix operation: %s\n\n", infix);
    stk_push('#');

    for(i=0,j=0;infix[i]!='\0';i++)
    {
        if(isalnum(infix[i]))
        {
            postfix[j++]=infix[i];
        }
        else if(infix[i]=='(')
        {
            stk_push(infix[i]);
        }
        else if(infix[i]==')')
        {
            while(stk[top]!='(')
            {
                postfix[j++]=stk[top];
                stk_pop();
            }
            stk_pop();
        }
        else
        {
            if(priority(infix[i]) > priority(stk[top]))
            {
                stk_push(infix[i]);
            }
            else
            {
                while(priority(infix[i]) <= priority(stk[top]))
                {
                    if(stk[top]=='#')
                        break;
                    postfix[j++]=stk[top];
                    stk_pop();
                }
                stk_push(infix[i]);
            }
        }
    }

    while(stk[top]!='#')
    {
        postfix[j++]=stk[top];
        stk_pop();
    }

    printf("\n\nDONE... \n");
    printf("\n\n--- Postfix Output---\n\t");
    for(i=0;postfix[i]!='\0';i++)
    {
        printf("%c", postfix[i]);
    }
    
    printf("\n");
}