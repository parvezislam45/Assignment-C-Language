#include<stdio.h>
#include<string.h>
void my_string(char *p)
{
    printf("%c",*p);
    return ;
}
int main()
{
    char str[100];

    gets(str);

    int len=strlen(str);

    for(int i=0;i<len;i++)
    {
        if((i+1)%2==0)
        {
            my_string(&str[i]);
        }
        printf("%c",str[i]);
    }

    return 0;
}
