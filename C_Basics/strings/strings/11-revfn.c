/* void strrev( char str[]);

//reverse the string (without using any extra array)
eg., input : str[] = "Kernel";
output : str[] = "lenreK" */

#include<stdio.h>
#include<string.h>

void mystrrev(char str[])
{
int i;
int l=strlen(str);
char temp;
for(i=0;i<=l/2;i++)
{
temp=str[i];
str[i]=str[l-1-i];
str[l-i-1]=temp;
}

}

int main()
{
int i;
char str[50];

printf("Enter the string: ");
scanf(" %s",str);


mystrrev(str);

printf("%s\n",str);

return 0;
}
