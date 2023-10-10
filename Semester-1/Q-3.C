/Write a program to calculate area and perimeter of a Rectangle/


#include<stdio.h>
void main()

{ 
int l,b,A,P;
printf("Enter the values of Length and Breadth");
scanf("%d %d",&l,&b);
A = l*b; 
P = 2*(l+b);
printf("Area of the rectangle = %d and Parameter of the rectangle = %d",A,P);
}
