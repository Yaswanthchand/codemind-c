#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int fact=1,sum=0,i,j;
    int t,b;
    t=a;
    while (t>0)
    {
        b=t%10;
        fact=1;
        for (i=1; i<=b; i++)
        {
            fact*=i;
        }
        sum+=fact;
        t=t/10;
    }
    if (sum==a)
    {
        printf("The number %d is a strong number",a);
    }
    else
    {
        printf("The number %d is not a strong number",a);
    }
    return 0;
}