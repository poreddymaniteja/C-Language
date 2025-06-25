//5) Write a function to take an array of structures as arguments, and convert all their names into capital letters( strupr implementation). print the data in the main function.

#include<stdio.h>
struct upperchar
{
char str[30];
};
void mystrupr(char *str1)
{
int i=0;
for(i=0;str1[i];i++)
{
if(str1[i] >= 'a' && str1[i] <= 'z')
str1[i]=str1[i]-32;
}
}
int main()
{
int i,n;
printf("Enter the size of the array :");
scanf("%d",&n);
struct upperchar s[n];
for(i=0;i<n;i++)
{
printf("Enter the string-%d\n :",i+1);
scanf(" %[^\n]s",s[i].str);
mystrupr(s[i].str);
printf("%s",s[i].str);
}

return 0;
}
