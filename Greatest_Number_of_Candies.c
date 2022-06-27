#include<stdio.h>
int main()
{
    int a,c=0;
    scanf("%d",&a);
    int i,ec=0,t,max;
    if (a>=2 && a<=100)
    {
        int arr[a];
        for (i=0;i<a;i++)
        {
            scanf("%d",&t);
            if (t>=1 && t<=100)
            {
                arr[i]=t;
            }
        }
        scanf("%d",&t);
        if (t>=1 && t<=50)
        {
            ec=t;
        }
        max=arr[0];
        for (i=0;i<a;i++)
        {
            if (arr[i]>max)
            {
                max=arr[i];
            }
        }
        for (i=0;i<a;i++)
        {
            c=0;
            if (arr[i]+ec>=max)
            {
                c=1;
            }
            if (c==1)
            {
                printf("True ");
            }
            else
            {
                printf("False ");
            }
        }
    }
    return 0;
}