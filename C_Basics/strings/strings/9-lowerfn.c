//void strlwr( char str[]);
// convert all upper case alphabets to lower case in the given string

#include<stdio.h>

void lower(char str[])
{
int i;

for(i=0;str[i]!=0;i++)
{

if(str[i]>=65 && str[i]<=91)
{
str[i]+=32;
}

}
}

int main(void)
{
int i;

char str[50];

printf("Enter string: ");
scanf("%s",str);

lower(str);

printf(" %s",str);

printf("\n");
return 0;
}

