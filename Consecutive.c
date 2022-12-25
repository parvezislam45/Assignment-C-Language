#include <stdio.h>
 
 
void  summation()
{
    int a,cnt=0;
    scanf("%d",&a);
 
    int start=(a/4)-3;
 
    for(int i=start;;i+=2)
    {
        cnt++;
        printf("%d ",i);
 
        if(cnt==4)
        {
            break;
        }
    }
 
    printf("\n");
    return ;
}
int main()
{
   int tt;
 
   scanf("%d",&tt);
   while(tt--)
   {
      summation();
   }  
   return 0;
   
}
 
