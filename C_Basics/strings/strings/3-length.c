/* "Write a program to find the length of a string. Length is the number of characters in a string (null character is not counted).
eg., char name[10] = ""abc""; //size of name is 10 bytes
            // length of name is 3" */

#include<stdio.h>
int main()
{
int i;
char str[50];

printf("Enter string: ");
scanf("%s",str);

printf("size of string %ld bytes\n",sizeof(str));

for(i=0;str[i]!=0;i++) {}

printf("length of the string %d\n",i);


return 0;
}

