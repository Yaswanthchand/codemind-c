#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    scanf("%d",&a);
    int rev=0,b,i,sq,s=0,t=a;
    while (t>0)
    {
        b=t%10;
        rev=(rev*10)+b;
        t=t/10;
    }
    for (i=1;rev>0;i++)
    {
        b=rev%10;
        sq=pow(b,i);
        s=s+sq;
        rev=rev/10;
    }
    if (s==a)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}