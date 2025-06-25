//int palindrome (char str[])
// return 1 if the given string is a palindrome, return 0 if it is not a palindrome

#include<stdio.h>
#include<string.h>

int pali(char str[])
{
int l,i;

l=strlen(str);

for(i=0;i<l/2;i++)
{
if(str[i]!=str[l-i-1])
return 0;
}
return 1;
}

int main()
{
int i,l;
char str[50];
int pal;

printf("Enter string: ");
scanf(" %s",str);

pal=pali(str);

if(pal==0)
printf("Not a Palindrome\n");

else
printf("Palindrome\n");

return 0;
}
 
