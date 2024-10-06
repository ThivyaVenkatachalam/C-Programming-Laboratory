#include<stdio.h>
#include<math.h>
int main()
{
    int a,n,r,terms;
    scanf("%d %d %d",&a,&r,&n);
    terms=(a*pow(r,n-1));
    printf("%d",terms);
    return 0;
    
    
}
