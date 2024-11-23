#include <stdio.h>

int main() {
int x=8,start=0,mid,end=x,res=0;
    while(start<=x)
    {
        mid=start+end/2;
     
    if(mid*mid==x)
    {
        res=mid;
        break;
    }
    else if(mid<x)
    {
        start=mid+1;
        res=mid;
    }
    else
    {
        end=mid-1;
    }
    }
    return res;
}
