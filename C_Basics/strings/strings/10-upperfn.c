/*  void strupr (char str[]);
// convert all lower case alphabets to upper case in the given string */

#include<stdio.h>

void upper(char str[])
{
int i;

for(i=0;str[i]!=0;i++)
{

if(str[i]>=97 && str[i]<=122)
{
str[i]-=32;
}

}
}

int main(void)
{
int i;

char str[50];

printf("Enter string: ");
scanf("%s",str);

upper(str);

printf(" %s",str);

printf("\n");
return 0;
}
