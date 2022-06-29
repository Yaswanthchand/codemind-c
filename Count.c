#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    int arr[a];
    int n1=0,n2=0;
    for (i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<a;i++)
    {
        if (arr[i]%2==0)
        {
            n1+=1;
        }
        else
        {
            n2+=1;
        }
    }
    printf("%d %d",n1,n2);
    return 0;
}