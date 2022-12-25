#include <stdio.h>
 
void swap(int *p,int *q)
{
    int temp=*p;
    *p=*q;
    *q=temp;
 
    return ;
}
 
int main()
{
 
  int n, cnt = 0;
 
  scanf("%d", &n);
 
  int my_arr[n];
 
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &my_arr[i]);
 
  }
 
  int q;
  scanf("%d",&q);
 
  while(q--)
  {
    int x,y;
    scanf("%d%d",&x,&y);
 
    int idX1=x-1;
 
    int idX2=y-1;
 
    swap(&my_arr[idX1],&my_arr[idX2]);
 
  }
 
 
    for (int i = 0; i < n; i++)
  {
    printf("%d ",my_arr[i]);
 
  }
  
 
 
return 0;
 
 
}
 
