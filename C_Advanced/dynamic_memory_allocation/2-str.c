// 2) create a string dynamically, read and print its value //

#include<stdio.h>
#include<stdlib.h>

int main()
{
char *ptr=(char *)malloc(10*sizeof(char));
printf("enter the string: ");
scanf("%[^\n]s",ptr);
printf("%s\n",ptr);
return 0;
}
