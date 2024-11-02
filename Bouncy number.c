#include <stdio.h>
int main()
{
    int n, pre,rem, i=1, d=1;
    scanf("%d", &n);
    pre= n% 10;
    n= n/10;
    while (n> 0) 
    {
        rem = n% 10;
        if (rem< pre)
        {
            i= 0; 
        } 
        else if (rem > pre) 
        {
            d = 0;
        }
        pre = rem;
        n= n/10;
    }
    if (i||d==0)
    {
        printf("True\n");
    } 
    else 
    {
        printf("False\n");
    }

    return 0;
}
