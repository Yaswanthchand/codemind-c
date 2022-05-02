#include<stdio.h>
int main()
{
    int n,c=0,k=0,d;
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        if(d%2==0)
        {
            c++;
        }
        
        else
        {
            k++;
        }
        n=n/10;
    }
    if(k==0)
    {
        printf("Even");
    }
    else if(c==0)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}
        
        
   