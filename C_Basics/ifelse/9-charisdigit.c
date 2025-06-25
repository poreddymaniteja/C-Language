// Read a character and print if the given character is a digit or not //

#include<stdio.h>
int main()
{
char n;
printf("Enter a digit: ");
scanf("%c",&n);

if(n>='0')
{
if(n<='9')
{
printf("%c is a digit\n",n);
}
else
{
printf("%c is not a digit\n",n);
}
}

else
{
printf("%c is not a digit\n",n);
}

return 0;
}
