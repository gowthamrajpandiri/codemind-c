#include<stdio.h>
int main()
{
    int n,r,p=1,s=0;
    scanf("%d",&n);
    for(;n>0;n=n/10)
    {
        r=n%10;
        p=p*r;
        s=s+r;
    }
    if(s==p)
        printf("Spy Number");
    else
        printf("Not Spy Number");
}