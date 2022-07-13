#include<stdio.h>
int main()
{
    int n,r,s=0;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        s+=r;
        n=n/10;
        if(s>=9 && n==0)
        {
            n=s;
            s=0;
        }
    }
    printf("%d",s);
    return 0;
}