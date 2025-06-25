// 8) char * strlwr(char s[]); // returns s base address //

#include<stdio.h>
char * strlwr(char *str);
int main()
{
char str[30];
scanf("%[^\n]s",str);

strlwr(str);
printf("%p\n",str);
return 0;
}


char * strlwr(char *str)
{
int i;
printf("%p\n",str);
for(i=0;*(str+i)!=0;i++)
{
if(*(str+i)>='A' && *(str+i)<='Z')
*(str+i)=*(str+i)+32;
}
printf("%s\n",str);
}
