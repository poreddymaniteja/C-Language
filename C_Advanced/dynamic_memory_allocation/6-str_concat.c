/*6) Write a function, that takes two strings as input and concatenates only the first n characters from first string and first m characters from second string and makes a new string.
eg., input str1 = "kernel masters", str2 = "raayan systems", n = 3, m = 5
output : kerraaya*/

#include<stdio.h>
#include<stdlib.h>

char* mystrcat(char *p1,char *p2,int n,int m)
{

char *p3=(char *)malloc(n*sizeof(char));
int i,j;
for(i=0;i<n;i++)
{
*(p3+i) = *(p1+i);
}
for(j=0;j<m;j++)
{
*(p3+i) = *(p2+j);
i++;
}
return p3;
}

int main()
{
int s;
scanf("%d",&s);
char *p1=(char *)malloc(s*sizeof(char));
char *p2=(char *)malloc(s*sizeof(char));
int n,m;
printf("enter 1st string:");
scanf("%s",p1);
printf("enter 2nd string:");
scanf("%s",p2);
printf("enter m and n length :");
scanf("%d%d",&n,&m);
char *p3 =mystrcat(p1,p2,n,m);
printf("%s",p3);
return 0;
}

