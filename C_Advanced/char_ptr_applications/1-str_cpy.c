/*1) Implement your own string copy function.
try calling the string copy function by sending the below as input:
1) string constant as destination and string variable as source
2) string variable as destination and string constant as source
3) string variable as destination and string variable as source
  note down the output and analyze the reasons.
*/

/*#include<stdio.h>
void  * mystrcpy(char * sor,char const * des);
int main()
{
char sor[30],des[30];
scanf("%[^\n]s",sor);
mystrcpy(sor,des);
printf("%s",des);
return 0;
}

void * mystrcpy(char * sor,char const * des)
{
int i;
for(i=0;sor[i]!='\0';i++)
des[i]=sor[i];
des[i]='\0';

}
OUTPUT - 
Assignment-1.c: In function ‘mystrcpy’:
Assignment-1.c:25:7: error: assignment of read-only location ‘*(des + (sizetype)i)’
 des[i]=sor[i];
       ^
Assignment-1.c:26:7: error: assignment of read-only location ‘*(des + (sizetype)i)’
 des[i]='\0';
       ^
*/

//2) string variable as destination and string constant as source

/*#include<stdio.h>
void  * mystrcpy(char const * sor,char * des);
int main()
{
char sor[30],des[30];
scanf("%[^\n]s",sor);
mystrcpy(sor,des);
printf("%s",des);
return 0;
}

void * mystrcpy(char const * sor,char * des)
{
int i;
for(i=0;sor[i]!='\0';i++)
des[i]=sor[i];
des[i]='\0';

}
 
OUTPUT - tarak ram
         tarak ram
*/

//3) string variable as destination and string variable as source

/*#include<stdio.h>
void  * mystrcpy(char * sor,char * des);
int main()
{
char sor[30],des[30];
scanf("%[^\n]s",sor);
mystrcpy(sor,des);
printf("%s",des);
return 0;
}

void * mystrcpy(char * sor,char * des)
{
int i;
for(i=0;sor[i]!='\0';i++)
des[i]=sor[i];
des[i]='\0';

}

OUTPUT - tarak ram
         tarak ram
*/

//4) string constant as destination and string constant as source

/*#include<stdio.h>
void  * mystrcpy(char const * sor,char const * des);
int main()
{
char sor[30],des[30];
scanf("%[^\n]s",sor);
mystrcpy(sor,des);
printf("%s",des);
return 0;
}

void * mystrcpy(char const * sor,char const * des)
{
int i;
for(i=0;sor[i]!='\0';i++)
des[i]=sor[i];
des[i]='\0';

}
OUTPUT - 
Assignment-1.c: In function ‘mystrcpy’:
Assignment-1.c:105:7: error: assignment of read-only location ‘*(des + (sizetype)i)’
 des[i]=sor[i];
       ^
Assignment-1.c:106:7: error: assignment of read-only location ‘*(des + (sizetype)i)’
 des[i]='\0';
*/
