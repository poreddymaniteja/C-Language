// 1) int strlen(char s[]); //

#include <stdio.h>

int mystrlen(char *s)
{
int i;

for(i=0;*(s+i)!='\0';i++) {}

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

