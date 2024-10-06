#include<stdio.h>
int main()
{
    int ac=100,x,y,cp,profit;
    printf("Number of copies sold:");
    scanf("%d",&x);
    printf("cost of each copy:");
    scanf("%d",&y);
    printf("cost spent by agency on each newspaper:");
    scanf("%d",&cp);
    profit=(x*y)-(x*cp)-ac;
    printf("The profit obtained:%d",profit);
    return 0;
    
}
