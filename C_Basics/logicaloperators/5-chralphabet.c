//Read a character and print if it is alphabet or not.//

#include<stdio.h>
int main()
{
char ch;
printf("enter the charater\n");
scanf("%c",&ch);
if(ch>=97 && ch<=122||ch>=65 && ch<=90)
printf(" it is a alphabet\n");
else
printf(" not a alphabet\n");
return 0;
}

// output//

/* enter the charater
a
it is a alphabet

enter the charater
A
it is a alphabet

enter the charater
5
not a alphabet*/
