/* Write a program to replace a given character by another character in a string.  WAP to display the word expansion of a number
eg., Input String : "789"
Output : Seven Eight Nine" */

#include<stdio.h>
int main()
{
int size,i;

printf("Enter the no of letters in a string: ");
scanf("%d",&size);
char str[size];

printf("Enter string: ");
scanf("%s",str);

for(i=0;i<size;i++)
{
switch(str[i]-48)
{
case 0: printf("Zero "); break;
case 1: printf("One "); break;
case 2: printf("Two "); break;
case 3: printf("Three "); break;
case 4: printf("Four "); break;
case 5: printf("Five "); break;
case 6: printf("Six "); break;
case 7: printf("Seven "); break;
case 8: printf("Eight "); break;
case 9: printf("Nine \n"); break;

default: ("Invalid\n"); break;
}
}

printf("\n");
return 0;
}
