 #include <stdio.h>
#include <math.h>

int fun_count(int p)
{
    int cnt = 0;

    while (p)
    {
        int rem = p % 10;
        if (rem == 7)
        {
            return 1;
        }
        p /= 10;
    }

    return 0;
}
int main()
{
    int n, cnt = 0;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (fun_count(*(arr + i)))
        {
            cnt++;
        }
    }

    int min_val = ceil(n / 2.0);

    if (cnt >= min_val)
    {
        printf("Beautiful\n");
    }

    else
    {
        printf("Ugly\n");
    }

    return 0;
}


