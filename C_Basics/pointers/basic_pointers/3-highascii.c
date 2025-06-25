// Write a program to take input for two character variables using pointers and find out which character has higher ascii value

#include<stdio.h>
int main()
{
char *p1, *p2, c1, c2;

p1=&c1, p2=&c2;

printf("Enter two characters: ");
scanf("%c %c",p1,p2);

*p1>*p2?printf("%c is greater\n",*p1):printf("%c is greater\n",*p2);

return 0;
}

