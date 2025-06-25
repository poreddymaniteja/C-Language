/*Input an alphabet. Output its case reverse.
eg., input: a
output: A

input: U
output: u

input: 4
output: not an alphabet*/

#include<stdio.h>
int main()
{
char ch;
printf("enter the alphabet\n" );
scanf("%c",&ch);
if (ch>=65 && ch<=90)
{
printf("%c\n",ch=ch+32);
}
else if (ch>=97 && ch<=122)
{
printf("%c\n",ch=ch-32);
}
else
{
printf("not a alphabet\n");
}
return 0;
}
