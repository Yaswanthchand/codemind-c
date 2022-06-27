#include<stdio.h>
int main()
{
    int a=0,b=1,y,n,i,arr[100],c=0;
    scanf("%d",&n);
    for (i=0;i<100;i++)
    {
        arr[i]=a;
        y=a+b;
        a=b;
        b=y;
    }
    for (i=0;i<100;i++)
    {
        if (n==arr[i])
        {
            c=1;
            break;
        }
    }
    if (c==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}