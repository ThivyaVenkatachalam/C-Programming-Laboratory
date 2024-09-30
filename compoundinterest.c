#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t;
    float cp,am;
    scanf("%f %f %f",&p,&r,&t);
    am= p*((pow((1 + r/ 100),t)));
    printf("%f",am);
    cp=am-p;
    printf("%f",cp);
    return 0;
}
