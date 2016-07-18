# smethng
#include<stdio.h>
void main()
{
int rev=0,rem,num;
printf("enter the number", num);
scanf("d",&num)
while(num>0)
{
rem=num%10;
rev=rev*10+rem;
num=num/10;
}
printf("the reverse of the interger is %d", rev);
}
