#include<stdio.h>
int main()
{
    int n,i,j,k,l;
    scanf("%d",&n);
    if(n<3)
    {
        printf("The pattern is not possible");
    }
    else
    {
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("
");
        if(j==n)
        {
            for(k=n-1;k>0;k--)
            {
                for(l=0;l<k;l++)
                {
                    printf("*");
                }
                printf("
");
            }
        }
    }
    }
}