// Read n characters from user and print if each character is a capital alphabet, small alphabet, numeric character  or special character //

#include<stdio.h>
int main()
{
int n;
char c;
printf("Enter n characters: ");
scanf("%d",&n);

while (n)
{
printf("Enter the character: ");
scanf(" %c",&c);

if (c>=97 && c<=122)
{
printf("%c is a small alphabet\n",c);
}

else if (c>=65 && c<=90)
{
printf("%c is a capital alphabet\n",c);
}

else if (c>='0' && c<='9')
{
printf("%c is a number character\n",c);
}

else
{
printf("%c is a special character\n",c);
}

n--;
}

return 0;
}
