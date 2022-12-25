#include <stdio.h>

int  funny_number(int my_arr[],int len)
{
    int sum=0;
    for(int i=0;i<len;i++)
    {
        if((my_arr[i]%2==0&&(i+1)%2==0)||(my_arr[i]%2!=0&&(i+1)%2!=0))
        {
            sum+=(my_arr[i]+i+1);
        }
    }

    return sum;  
}
int main()
{

  int n;
  
  scanf("%d",&n);

  int my_arr[n];

  for(int i=0;i<n;i++)
  {
    scanf("%d",&my_arr[i]);
  }


  int res=funny_number(my_arr,n);


  printf("%d\n",res);
   
}

