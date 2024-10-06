#include<stdio.h>
int main()
{
    float netprice;
    float originalprice;
    float gst;
    scanf("%f %f",&netprice,&originalprice);
    gst=((netprice-originalprice)/originalprice)*100;
    printf("%.2f",gst);
    return 0;
}

