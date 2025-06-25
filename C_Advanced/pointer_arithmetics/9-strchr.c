// 9) char * strchr( char s[], char c); // returns address of given character first occurrence in given string //

#include<stdio.h>
char * mystrchr(char *str,char ch);
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

char * mystrchr(char *str,char ch) 
{
int i,j=0;
for(i=0;*(str+i)!=0;i++);
for(;i>j;i--)
{
if(*(str+i)==ch)
return *(str+i)-str;
}
return 0;
}

