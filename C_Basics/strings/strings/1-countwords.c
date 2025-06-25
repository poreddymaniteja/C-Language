//  Take a string as an input, and count the number of words in the string. Take space, comma,exclamation, question mark and fullstop as delimitters for word counting //

#include<stdio.h>
int main()
{
int i,count=0;
char str[50];

printf("Enter the string: ");
scanf("%[^\n]s",str);

for(i=0;str[i]!=0;i++)
{

if((str[i]==' '||str[i]==','||str[i]=='.'||str[i]=='?'||str[i]=='!') && (str[i+1]!=' '&&str[i+1]!=','&&str[i+1]!='.'&&str[i+1]!='?'&&str[i+1]!='!'))
{
count++;
}
}

if(str[0]==' '||str[0]==','||str[0]=='.'||str[0]=='?'||str[0]=='!')
count--;

printf("%d\n",(count+1));

return 0;
}

