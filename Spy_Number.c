#include<stdio.h>
int main()
{
    int n,sum=0,r,i,mul=1,temp;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        r=n%10;
        sum+=r;
        mul*=r;
        n=n/10;
    }
    if(sum==mul)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}