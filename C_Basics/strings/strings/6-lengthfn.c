/*  int strlen( char str[]);
returns the length of the string.

Implementation:
//string length is the count of characters till the first null character is found in a string
int strlen_1(char str[])
{
int i;
for(i=0; str[i] != '\0'; i++); // count all characters till null character is found.
return i;  // return the count.
} */

#include<stdio.h>

int mystrlen(char str[])
{
int i;

for(i=0;str[i]!='\0';i++) {}

return i;
}

int main()
{
int i,len;
char str[50];

printf("enter string: ");

scanf("%[^\n]s",str);

len=mystrlen(str);

printf("Size of the string: %ld\n",sizeof(str));

printf("length of string: %d\n",len);

return 0;
}

