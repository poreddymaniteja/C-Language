/*3) Implement your own string concatenation function.
try calling the string copy function by sending the below as input:
1) string constant as destination and string variable as source
2) string variable as destination and string constant as source
3) string variable as destination and string variable as source
4) string constant as destination and string constant as source
note down the output and analyze the reasons.
*/

/*1) string constant as destination and string variable as source
#include<stdio.h>
void mystrcat(char * sor,char const * des);
int main()
{
char sor[30],des[30];
printf("Enter the source file :");
scanf("%[^\n]s",sor);
printf("Enter the destination file :");
scanf(" %[^\n]s",des);
mystrcat(sor,des);
printf("%s",sor);
return 0;
}

void mystrcat(char * sor,char const * des)
{
int i,j;
for(i=0;sor[i];i++)
{
if(sor[i]==0)
break;
}
for(j=0;des[j]!=0;j++)
{

sor[i]=des[j];
i++;
}
sor[i]='\0';
//printf("%s",sor);
}
OUTPUT -tarak ram
        tammana
        tarak ramtammana*/

/*2) string variable as destination and string constant as source
#include<stdio.h>
void mystrcat(char const * sor,char  * des);
int main()
{
char sor[30],des[30];
printf("Enter the source file :");
scanf("%[^\n]s",sor);
printf("Enter the destination file :");
scanf(" %[^\n]s",des);
mystrcat(sor,des);
printf("%s",sor);
return 0;
}

void mystrcat(char const * sor,char * des)
{
int i,j;
for(i=0;sor[i];i++)
{
if(sor[i]==0)
break;
}
for(j=0;des[j]!=0;j++)
{

sor[i]=des[j];
i++;
}
sor[i]='\0';
//printf("%s",sor);
}
OUTPUT - 
Assignment-3.c: In function ‘mystrcat’:
Assignment-3.c:72:7: error: assignment of read-only location ‘*(sor + (sizetype)i)’
 sor[i]=des[j];
       ^
Assignment-3.c:75:7: error: assignment of read-only location ‘*(sor + (sizetype)i)’
 sor[i]='\0';
       ^
*/
/*3) string variable as destination and string variable as source

#include<stdio.h>
void mystrcat(char  * sor,char  * des);
int main()
{
char sor[30],des[30];
printf("Enter the source file :");
scanf("%[^\n]s",sor);
printf("Enter the destination file :");
scanf(" %[^\n]s",des);
mystrcat(sor,des);
printf("%s",sor);
return 0;
}

void mystrcat(char * sor,char * des)
{
int i,j;
for(i=0;sor[i];i++)
{
if(sor[i]==0)
break;
}
for(j=0;des[j]!=0;j++)
{

sor[i]=des[j];
i++;
}
sor[i]='\0';
//printf("%s",sor);
}
OUTPUT - tarak ram
         tammana
         tarak ramtammana
*/
//4) string constant as destination and string constant as source

#include<stdio.h>
void mystrcat(char  const * sor,char const * des);
int main()
{
char sor[30],des[30];
printf("Enter the source file :");
scanf("%[^\n]s",sor);
printf("Enter the destination file :");
scanf(" %[^\n]s",des);
mystrcat(sor,des);
printf("%s",sor);
return 0;
}

void mystrcat(char const * sor,char const * des)
{
int i,j;
for(i=0;sor[i];i++)
{
if(sor[i]==0)
break;
}
for(j=0;des[j]!=0;j++)
{

sor[i]=des[j];
i++;
}
sor[i]='\0';
//printf("%s",sor);
}

/* OUTPUR - 
Assignment-3.c: In function ‘mystrcat’:
Assignment-3.c:151:7: error: assignment of read-only location ‘*(sor + (sizetype)i)’
 sor[i]=des[j];
       ^
Assignment-3.c:154:7: error: assignment of read-only location ‘*(sor + (sizetype)i)’
 sor[i]='\0';
       ^  */
