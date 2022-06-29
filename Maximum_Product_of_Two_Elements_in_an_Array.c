#include<stdio.h>
#include<string.h>
int prod(int *arr,int a)
{
    int i,j,max=0,pr;
    for (i=0;i<a;i++)
    {
        for (j=0;j<a;j++)
        {
            if (i!=j)
            {
                pr=(arr[i]-1)*(arr[j]-1);
                if (max<pr)
                {
                    max=pr;
                }
            }
        }
    }
    return max;
}
int main()
{
    char str[1000];
    scanf("%[^
]s",str);
    int l=strlen(str),i,y=0,j=0,k=0;
    int arr[100],max=1;
    for (i=0;i<l;i++)
    {
        if (str[i]==32)
        {
            int val=0;
            for (j=y;j<i;j++)
            {
                val=(val*10)+str[j]-48;
            }
            arr[k++]=val;
            y=i+1;
        }
        else if(i==l-1)
        {
            int val=0;
            for (j=y;j<=i;j++)
            {
                val=(val*10)+str[j]-48;
            }
            arr[k++]=val;
            y=i+1;
            break;
        }
    }
    max=prod(arr,k);
    printf("%d",max);
    return 0;
}