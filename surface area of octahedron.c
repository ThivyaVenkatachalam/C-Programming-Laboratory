#include<stdio.h>
#include<math.h>
int main()
{
    float a,sa;
    printf("Enter the sides of octahedron:");
    scanf("%f",&a);
    sa=2*sqrt(3)*pow(a,2);
    printf("%.3f",sa);
    return 0;
    
    
}
