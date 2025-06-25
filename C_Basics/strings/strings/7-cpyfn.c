/*
void strcpy ( char d[] . char s[]);
copies all characters from source string (char s[]) to destination string( char d[]) , upto null character ( including null character).

Implementation:

void strcpy_1( char d[], char s[])
{
int i = 0;
while( s[i] != '\0')
{
d[i] = s[i];
i++;
}
d[i] = '\0';
}
*/

#include<stdio.h>

void mystrcpy(char d[], char s[])
{

int i=0;

while(s[i]!=0)
{
d[i]=s[i];
i++;
}

d[i]='\0';
}

int main()
{
char d[50];
char s[50];

printf("Enter the source: ");
scanf("%[^\n]s",s);

//printf("Enter the destination: ");
//scanf("%[^\n]s",d);

mystrcpy(d,s);

printf("Destination: %s \n",d);
return 0;
}
