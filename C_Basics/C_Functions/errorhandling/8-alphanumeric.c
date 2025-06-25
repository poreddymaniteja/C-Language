/* Write a function to determine if a character is alphanumeric or not and print the appropriate output in main function. (return 1 if it is alphanumeric, 0 if it is not alpha numeric).
Hint: int fun_alpha_num(char c) */

#include<stdio.h>

int fun_alpha_num(char c)
{
if (c>='a' && c<='z' || c>='A' && c<='Z' || c>='0' && c<='9')
{
return 1;
}

else return 0;
}

int main()
{

char c;

printf("Enter character value: ");
scanf("%c",&c);

if (fun_alpha_num(c))
{
printf("%c is Alphanumeric\n",c);
}
else
{
printf("%c is not Alphanumeric\n",c);
}

return 0;
}

