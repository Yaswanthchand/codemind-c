#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int h,i,max,min;
    if (a>b)
        max=a;
    else
        max=b;
    h=1;
    for (i=1; i<=max; i++)
    {
       if (a%i==0 && b%i==0)
       {
           if (i>h)
           {
               h=i;
           }
       }
    }
    printf("%d",h);
    return 0;
}