#include<stdio.h>

int main()
{
    int i,original,remain,sum,num;
    for(i=0;i<=999;i++)
    {
        original=i;
        sum=0;

        while(original!=0)
        {
            remain=original%10;
            sum=sum+(remain*remain*remain);
            original=original/10;
        }
        if(sum==num)
        {
            printf("%d\n",num);
        }
    }
}
