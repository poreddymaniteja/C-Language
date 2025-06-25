// Write a program that reads an integer and displays the right-most digit of the number //
// (Eg: User enters, 456, the output should be 6) //

#include<stdio.h>
int main() 
{

int a,b;    
int remainder;
printf("Enter the value of a and b:");
scanf("%d%d",&a,&b);
remainder=a%b;
printf("This is your remainder: %d\n",remainder);
return 0;

}
