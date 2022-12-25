#include <stdio.h>
int check2(int val)
{
  if (val % 5 == 0)
  {
    return 1;
  }

  else
  {
    return -1;
  }
}

int check1(int val)
{

  if (val % 3 == 0)
  {
    return 1;
  }

  else
  {
    return -1;
  }
}

int main()
{

  int n, cnt = 0;

  scanf("%d", &n);

  int my_arr[n];

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &my_arr[i]);

    if (check1(my_arr[i])==1 || check2(my_arr[i])==1)
    {
      cnt++;
    }
  }

  if (cnt > 0)
  {
    printf("%d\n", cnt);
  }

  else
  {
    printf("-1\n");
  }
}
