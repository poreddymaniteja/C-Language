//3) create a string dynamically, copy a string constant to it ( "Kernel"). Create another string dynamically. Copy the first string to the second string.


#include<stdio.h>
#include<stdlib.h>
int main()
{
char *ptr1=(char *)malloc(10*sizeof(char));

char *ptr2=(char *)malloc(10*sizeof(char));
printf("enter the string:");
scanf("%[^\n]s",ptr1);
int i=0;
while(ptr1[i]) 
{
ptr2[i]=ptr1[i];
i++;
}      
printf("%s\n",ptr2);
return 0;
}
