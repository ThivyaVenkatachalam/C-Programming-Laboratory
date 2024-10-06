#include<stdio.h>
int main()
{
 int x,total=0;
 printf("Enter the number of pyramid:");
 scanf("%d",&x);
 for(i=1;i<=x;i++);
 {
   total=total*3+i;
   printf("%d", total);
 }
 return 0;
 }