#include <stdio.h>
int main() 
{
    int n,p,c;
    int i= 1,d= 1;
    scanf("%d", &n);
    p=n%10;
    n=n/10;
    while(n> 0) 
    {
        c=n%10; 
        n=n/10; 
        if(c<p) 
        {
            i=0;
        }
        if(c>p) 
        {
            d=0;
        }
        p=c;
    }
    if(i == 0 && d == 0)
    {
        printf("True\n");
    }   
    else  
    {
        printf("False\n");
    }

    return 0;
}