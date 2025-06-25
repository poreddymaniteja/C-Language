/*

without using nested loops :
*
* *
* * *
* * * *
* * * * *

*/

#include<stdio.h>
int main()
{
for (int i=1;i<=5;i++)
{
int a=1;
label: printf("* ");

if (a<i)
{
a++;
goto label;
}
printf("\n");
}
return 0;
}

