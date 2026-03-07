#include<stdio.h>
int main()
{
    int num,digit,remain,rev=0;
    printf("Enter the Number");
    scanf("%d",&num);
    digit=num;
    while(num!=0)
    {
        remain=num%10;
        rev=rev*10+remain;
        num=num/10;
    }
    if(digit==rev)
    printf("%d is a Palindrome Number \n",digit);
    else
    printf("%d is not a Palindrome Number \n",digit);
    
}