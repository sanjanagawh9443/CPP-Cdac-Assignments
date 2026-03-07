#include<stdio.h>

int main()
{
int count=0, num=2, i;
int isPrime;
printf("first 25 prime numbers are\n" );
while(count<25)
{
isPrime=1;
for(i=2;i<=num/2;i++)
 if(num%i==0){
    isPrime=0;
    break;
 }
}
if(isPrime)
{
    printf("%d",num);
    count++;
}
num++;
}

