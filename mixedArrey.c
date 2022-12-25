#include <stdio.h>
#include <math.h>

int prime_count(int p)
{
    int flag = 0;
    if (p == 1)
    {
        return 0;
    }

    for (int i = 2; i < p; i++)
    {
        if (p % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

    return 0;
}

int even_check(int q)
{
    if (q % 2 == 0)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}
int main()
{
    int n, cnt = 0, sum_of_even = 0,even_cnt=0;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (prime_count(*(arr + i)))
        {
            cnt++;
        }

        if (even_check(*(arr + i)))
        {
            sum_of_even += *(arr + i);
            even_cnt++;
        }
    }

    printf("Prime numbers: %d\n", cnt);

    float result= sum_of_even/even_cnt;

    printf("Average of all positive integers: %.2f\n",result);

    return 0;
}


