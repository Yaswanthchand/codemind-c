#include<stdio.h>
int prime(int n)
{
    int i;
    for (i=2;i*i<=n;i++)
    {
        if (n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a;
    scanf("%d",&a);
    int d1=0,d2=0,i,p1,p2;
    for (i=a+1;i<=10000;i++)
    {
        if (prime(i)==1)
        {
            d1=i-a;
            p1=i;
            break;
        }
    }
    for (i=a;i>0;i--)
    {
        if (prime(i)==1)
        {
            d2=a-i;
            p2=i;
            break;
        }
    }
    if (d1>d2)
    {
        printf("%d",d2);
    }
    else if (d1<d2)
    {
        printf("%d",d1);
    }
    else
    {
        printf("%d",d2);
    }
    return 0;
}
