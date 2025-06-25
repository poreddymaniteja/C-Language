// 2)  char * strrev( char s[]); // returns string base address //

#include<stdio.h>
#include<string.h>

char* mystrrev(char *);
int main()
{
	int i=0;
       
	char str[500];
	printf("Enter String: ");
	scanf(" %[^\n]s",str);
	char *str1=mystrrev(str);
        printf("%s\n",str1);
	return 0;
}
char* mystrrev(char *str)
{
	int  temp;
	int i,j=0,a;
         a=strlen(str);
          for(i=0,j=a-1;i<j;i++,j--)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}
	return str;
}

/*
void mystrrev(char *str)
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
*/
