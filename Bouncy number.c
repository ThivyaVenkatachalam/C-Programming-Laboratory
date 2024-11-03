#include <stdio.h>
int main() 
{
    int n,p,c;
    int i= 1,d= 1;
    scanf("%d", &n);
    p=n%10;
    n=n/10;
    while (N > 0) 
    {
        c=n%10; 
        n=n/10; 
        if (c<p) 
        {
            i=0;
        }
        if (c>p) 
        {
            d=0;
        }
        p=c;
    }
    if (!i&&!d) 
    {
        printf("True\n");
    }   
    else  
    {
        printf("False\n");
    }

    return 0;
}