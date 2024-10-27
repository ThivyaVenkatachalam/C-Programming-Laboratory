
#include<stdio.h>
int main()
{
  int n,num=2,c=0;
  scanf("%d",&n);
  while(c<n)
    {
      int isprime=1;
      for(int i=2;i<=num/2;i++)
      {
        if(num%i==0)
        {
          isprime=0;
          break;
        }
      }
      if(isprime)
      {
        c++;
      }
      if(c==n)
      {
         printf("%d ",num);
    
      }
        num++;
    }
  return 0;
}
