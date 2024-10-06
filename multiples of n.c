#include<stdio.h>
int main()
{
    int a;
    int sum=1;
    scanf("%d",&a);
    for(int i=1;i<4;i++)
    {
       sum=a*i;
       printf("%d ",sum);
    }
    return 0;
}
