#include<stdio.h>
int main()
{
  int a[]={45,54,23,54,94,22,43,8,32,1,12,32,32};
  int n=sizeof(a)/sizeof(a[0]);
  int f=0;
  for(int i=0;i<n;i++)
  {
      if(a[i]==i+1)
      {
        printf("%d ",a[i]);
        f=1;
        break;
      }
  }
  if(!f)
  {
    printf("-1");
  }
  return 0;
}
