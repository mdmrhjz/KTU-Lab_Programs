#include<stdio.h>
#include<string.h>

char str[30], ascii_val=90, left[30], right[30];

struct op_and_pos
{
    int pos;
    char op;
} k[30];

void findop();
void fleft(int x);
void fright(int x);
void explore();

int main()
{
    printf("\n\n --- INTERMEDIATE CODE ---\n");
    printf("\nEnter the input expression: ");

    scanf("%s", str);
    findop();
    printf("\n -> OUTPUT");
    explore();
    printf("\n");

    return 0;
}

void findop()
{
    int i, l=0;

    for(i=0; i<strlen(str); i++)
    {
        if(str[i] == '=')
        {
            k[l].pos=i;
            k[l++].op=str[i];
        }
        else if(str[i] == ':')
        {
            k[l].pos=i;
            k[l++].op=str[i];
        }
    }

    for(i=0; i<strlen(str); i++)
    {
        if(str[i] == '/')
        {
            k[l].pos=i;
            k[l++].op=str[i];
        }
    }

    for(i=0; i<strlen(str); i++)
    {
        if(str[i] == '*')
        {
            k[l].pos=i;
            k[l++].op=str[i];
        }
    }

    for(i=0; i<strlen(str); i++)
    {
        if(str[i] == '+')
        {
            k[l].pos=i;
            k[l++].op=str[i];
        }
    }

    for(i=0; i<strlen(str); i++)
    {
        if(str[i] == '-')
        {
            k[l].pos=i;
            k[l++].op=str[i];
        }
    }
}

void explore()
{
    int i, j;

    i=1;
    while(k[i].op != '\0')
    {
        j=k[i].pos;
        fleft(j);
        fright(j);

        str[j]=ascii_val--;

        printf("\n%c = %s %c %s", str[j], left, k[i].op, right);

        i++;
    }
    fright(-1);
    fleft(strlen(str));
    printf("\n%s = %s", right, left);
}

void fleft(int x)
{
    int w=0, flag=0;
    x--;

    while(str[x] != '+' && str[x] != '-' && str[x] != '*' && str[x] != '/' && str[x] != '=' && str[x] !='\0' && x != -1)
    {
        if(flag!=1 && str[x]!='$')
        {
            left[w++]=str[x];
            left[w]='\0';

            str[x]='$';
            flag=1;

        }
        x--;
    }
}

void fright(int x)
{
    int w=0, flag=0;
    x++;

    while(str[x] != '+' && str[x] != '-' && str[x] != '*' && str[x] != '/' && str[x] != '=' && str[x] !='\0' && x != -1)
    {
        if(flag!=1 && str[x]!='$')
        {
            right[w++]=str[x];
            right[w]='\0';

            str[x]='$';
            flag=1;

        }
        x++;
    }
}