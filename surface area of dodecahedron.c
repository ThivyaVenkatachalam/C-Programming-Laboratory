#include<stdio.h>
#include<math.h>
int main()
{
    float a,sa;
    printf("Enter the sides of dodecahedron:");
    scanf("%f",&a);
    sa=3*sqrt(25+10*sqrt(5))*pow(a,2);
    printf("%.3f",sa);
    return 0;
    
    
}
