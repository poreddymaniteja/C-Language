//2) Implement your own string comparison function and try calling the function using two string constants as input arguments.

#include<stdio.h>
int strcmp(char const * sor,char const * des)
{
int i;
for(i=0;sor[i];i++)
{
if(sor[i]<des[i])
return 1;
else if(sor[i]>des[i]) 
return -1;
}
return 0;
}

int main()
{
char str1[30],str2[30];
int d;
printf("Enter the  string-1 :");
scanf("%[^\n]s",str1);
printf("Enter the string-2 :");
scanf(" %[^\n]s",str2);
d=strcmp(str1,str2);
if(d==1)
printf("The given string-2 is big");
else if(d==-1)
printf("The given string-1 is big");
else if(d==0)
printf("The given both strings are equal");
return 0;
}
