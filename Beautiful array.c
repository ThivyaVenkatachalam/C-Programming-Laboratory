#include <stdio.h>

int main() 
{
    int N, L;
    scanf("%d %d", &N, &L);

    int arr[L];
    int s[10001] = {0}; 
    int Beautiful = 1;
    int Ordered = 1;   
    for (int i = 0; i < L; i++) 
    {
        scanf("%d", &arr[i]);
        
        if (arr[i] < 1 || arr[i] > N || s[arr[i]] == 1)
        {
            Beautiful = 0;
        }
        s[arr[i]] = 1;
        if (i > 0 && arr[i] != arr[i - 1]) 
        {
            if (arr[i] > arr[i - 1] || arr[i] < arr[i - 1]) 
            {
                Ordered = 0;
            }
        }
    }

    if (Ordered || Beautiful == 0)
    {
        printf("False\n");
    } 
    else 
    {
        printf("True\n");
    }
    return 0;
}
