/* "Write a program to convert a string into upper case and print.
eg., input : Hello
output : HELLO" */

#include<stdio.h>
#include<string.h>

int main()
{
int i;

char str[100];

printf("Enter string: ");
scanf("%[^\n]s",str);

for(i=0;str[i]!=0;i++)
{

if(str[i]>=97&&str[i]<=122)
{
str[i]=str[i]-32;

}

}
printf("%s\n",str);
return 0;
}
