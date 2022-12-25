#include <stdio.h>
#include <string.h>

void  descendingOrder(char *p,char *q)
{
    char temp=*p;
    *p=*q;
    *q=temp;
}


int main()
{

    char str[100];

    gets(str);

    int len = strlen(str);

    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (str[i] < str[j])
            {
               descendingOrder(&str[i],&str[j]);
            }
        }
    }

    puts(str);
}

