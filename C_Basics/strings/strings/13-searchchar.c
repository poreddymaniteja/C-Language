// int strchr( char str[], char ch)
// search the character ch ,in string str , whenever the first matching occurs, return the matching index. 

#include<stdio.h>
int mystrchr(char str[],char ch);
int main()
{
char ch,str[30];
int d;
printf("Enter the string :");
scanf("%[^\n]s",str);
printf("Enter the character :");
scanf(" %c",&ch);
d=mystrchr(str,ch);
if(d)
printf("The given character was present in the string of %d index\n",d);
else
printf("The given character does not available in the string\n");
return 0;
}


int mystrchr(char str[],char ch)
{
int i;
for(i=0;str[i]!=0;i++)
{
if(str[i]==ch)
return i;
}
return 0;
}

