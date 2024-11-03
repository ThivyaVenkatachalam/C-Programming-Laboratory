#include<stdio.h>
int main()
 {
    int n, l;
    scanf("%d %d", &n, &l);
    int arr[l];
    int i,j;
    for (i = 0; i < l; i++) 
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < l; i++) 
    {
        if (arr[i] < 1 || arr[i] > n) 
        { 
            printf("False\n");
            return 0;
        }
        for (j = i + 1; j < l; j++) 
        {
            if (arr[i] == arr[j])
            {
                printf("False\n");
                return 0;
            }
        }
    }
    int a = 1, d= 1;
    for (i = 1; i < l; i++) 
    {
        if (arr[i] > arr[i - 1])
        d= 0;
        if (arr[i] < arr[i - 1]) 
        a= 0;
    }
    if (a || d) 
    {
        printf("False\n");
    }
     else 
    {
        printf("True\n");
    }

    return 0;
}