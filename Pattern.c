#include<stdio.h> 
int main()
{    
    int n,i,j=1;  
    scanf("%d",&n);
    while(j!=n+1)
    {
         for(i=1;i<=n;i++)     
    {           
        printf("%d ",j); 
     }        
        printf("
");    
        j++;  
    }
}