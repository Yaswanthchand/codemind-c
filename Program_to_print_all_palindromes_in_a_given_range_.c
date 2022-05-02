#include<stdio.h>
int main()
{
   int num, rem, reverse_num, temp,m,n;

   scanf("%d",&m);

   scanf("%d",&n);

   for(num=m;num<=n;num++)
   {
      temp=num;
      reverse_num=0;
      while(temp)
      {
         rem=temp%10;
         temp=temp/10;
         reverse_num=reverse_num*10+rem;
      }
      if(num==reverse_num)
         printf("%d ",num);
   }
   return 0;
}