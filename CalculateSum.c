#include <stdio.h>

int main()
{
    int n, i, sum=0;
    
    scanf(" %d", &n);
    
    for(i=1; i<=n; i++)
    {
        if(((i-1)/3)%2==0)
        {
            sum+=i;
        }
        else sum-=i;
    }
    printf("%d\n", sum);

    return 0;
}