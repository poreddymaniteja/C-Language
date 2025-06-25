//  3) char * strcpy( char d[] , char s[]);  // returns destination base address //

#include<stdio.h>

char * mystrcpy(char *des,char *sor);

int main()
{
char sor[30],des[30];
printf("Enter String: ");
scanf("%[^\n]s",des);
char *ptr=mystrcpy(des,sor);
printf("%p\n",ptr);
printf("%s\n",ptr);
return 0;
}


char * mystrcpy(char *des,char *sor)
{
int i;
printf("Address: %p\n",sor);
for(i=0;*(des+i)!='\0';i++)
*(sor+i)=*(des+i);
*(sor+i)='\0';
return sor;
}
