#include<stdio.h>
int main()
{
    int days,hours,mins,sec;
    int totalsec;
    scanf("%d %d %d %d",&days,&hours,&mins,&sec);
    totalsec=((days*24*3600)+(hours*3600)+(mins*60)+sec);
    printf("%d",totalsec);
    return 0;
    
}
