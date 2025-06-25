// 7) char  * strcat(char d[], char s[]); // returns destination base address //

#include<stdio.h>
void * mystrcat(char *des,char *sor);
int main()
{
char sor[30],des[30];
printf("Enter the source string :");
scanf("%[^\n]s",sor);
printf("Enter the destination string :");
scanf(" %[^\n]s",des);
mystrcat(des,sor);
printf("%s\n",des);
return 0;
}
void * mystrcat(char *des,char *sor)
{
int i,j;
for(i=0;*(des+i);i++)
{
if(*(des+i)==0)
break;
}
for(j=0;*(sor+j)!=0;j++)
{

*(des+i)=*(sor+j);
i++;
}
*(des+i)='\0';
//printf("%s",sor);
}
