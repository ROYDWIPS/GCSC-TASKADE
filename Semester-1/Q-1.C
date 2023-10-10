//Write a program to check if the given number is prime or not//

#include<stdio.h>
void main()

{ 
int n,i,a=0;
printf("Enter an integer number");
scanf("%d",&n);
for (i=2;i<=n/2;i++)
{
if(n%i==0)
{
a=1;
break;
}
}
if (a==0)
{
printf("%d is a prime number",n);
}
else
{
printf("%d is not a prime number",n);
}
}
