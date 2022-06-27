#include<stdio.h>
int main()
{
    int n,i,sum,n1,n2;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
      scanf("%d%d",&n1,&n2);
      sum=n1+n2;
      printf("%d
",sum);
    }
    return 0;
}