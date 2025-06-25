//4) Write a swap function to swap the values of two character variables.

#include<stdio.h>
void swap(char *a,char *b)
{
printf("Before swaping the character variables are a=%c and b=%c\n",*a,*b);
char temp;
temp=*a;
*a=*b;
*b=temp;
printf("After swaping the character variables are a=%c and b=%c\n",*a,*b);
 
}
int main()
{
char a,b;
printf("Enter the values :");
scanf("%c %c",&a,&b);
swap(&a,&b);

return 0;
}
