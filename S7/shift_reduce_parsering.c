#include<stdio.h>
#include<string.h>

struct production
{
    char left[20], right[20];
} rules[20];

int main()
{
    int n, i, j, k, stack_len, sub_str_len, stack_top;
    char temp[20], str[30], *sub_str, *token1, *token2, stack[30], shifted_ch[2];

    printf("\n\n --- SHIFT REDUCE PARSER ---\n");
    printf("\nEnter the number of productions: ");
    scanf("%d", &n);

    printf("\nEnter the productions below\n");
    for(i=0; i<n; i++)
    {
        scanf("%s", temp);
        token1=strtok(temp, "->");
        token2=strtok(NULL, "->");
        strcpy(rules[i].left, token1);
        strcpy(rules[i].right, token2);
    }

    printf("\nEnter the input string: ", str);
    scanf("%s", str);

    printf("\n -> OUTPUT");
    stack[0]='\0';
    i=0;
    while(str[i] != '\0')
    {
        shifted_ch[0]=str[i];
        shifted_ch[1]='\0';
        strcat(stack, shifted_ch);
        printf("\n%s\t", stack);
        i++;

        for(j=i; str[j]!='\0'; j++)
            printf("%c", str[j]);
        printf("\t");

        printf("Shift %c", shifted_ch[0]);

        for(j=0; j<n; j++)
        {
            sub_str=strstr(stack, rules[j].right);
            if(sub_str != NULL)
            {
                stack_len=strlen(stack);
                sub_str_len=strlen(sub_str);
                stack_top=stack_len-sub_str_len;
                stack[stack_top]='\0';
                strcat(stack, rules[j].left);

                printf("\n%s\t", stack);
                for(k=i; str[k]!='\0'; k++)
                    printf("%c", str[k]);
                printf("\t");

                printf("Reduce %s -> %s", rules[j].left, rules[j].right);

                break;
            }
        }
    }

    if(i == strlen(str) && strcmp(stack, rules[0].left) == 0)
    {
        printf("\n\n -> String Accepted\n\n");
    }
    else
    {
        printf("\n\n -> String Not Accepted\n\n");
    }

    return 0;
}