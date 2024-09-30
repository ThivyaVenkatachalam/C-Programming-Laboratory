#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    c=a+b;
    a=b;
    b=c;
    c=a;
    printf("%d",a);
    printf("%d",b);
    printf("%d",c);
    return 0;
