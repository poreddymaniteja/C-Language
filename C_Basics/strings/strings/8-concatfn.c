/* void strcat( char d[] , char s[]);
concatenates the content from source string to the end of destination string ( copy paste characters from s to  d , from null character index in d )
eg., char d[] = "Kernel";
char s[] = "Masters"; */

#include<stdio.h>
void mystrcat(char strd[], char strs[])
{
int i,j;

for(i=0;strd[i];i++)
{

if(strd[i]=='\0')
{
break;
}
}

for(j=0;strs[j]!=0;j++,i++)
{
strd[i]=strs[j];

}
strd[i]='\0';

}

int main()
{
int i,j;
char strs[50];
char strd[50];

printf("Enter source: ");
scanf(" %[^\n]s",strs);

printf("Enter destination: ");
scanf(" %[^\n]s",strd);

mystrcat(strd, strs);

printf("%s\n",strd);

return 0;
}

