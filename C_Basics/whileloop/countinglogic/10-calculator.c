// write the calculator program to read two numbers and one character (+, -, *, / , %) from the user, and based on character, do appropriate operations on numbers and print the output. Modify the program to repeat this task n number of times //

#include<stdio.h>
int main()
{
int n,a,b;
char c;
printf("Enter the value of n :");
scanf("%d",&n);
while(n)
{
printf("Enter the two numbers :");
scanf("%d%d",&a,&b);
printf("Enter the character :");
scanf(" %c",&c);
if(c=='+')
{
printf("Result of %d%c %d is %d\n",a,c,b,a+b);
}
else if(c=='-')
{
printf("Result of %d%c %d is %d\n",a,c,b,a-b);
}
else if(c=='*')
{
printf("Result of %d%c %d is %d\n",a,c,b,a*b);
}
else if(c=='/')
{
printf("Result of %d%c %d is %d\n",a,c,b,a/b);
}
else if(c=='%')
{
printf("Result of %d%c %d is %d\n",a,c,b,a%b);
}
n--;
}
return 0;
}
