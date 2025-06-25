/* Write the following program :
Declare a character array without size.
Initialize the array with characters of your name.
Print your name using for loop  */

#include<stdio.h>
int main()
{
char arr[]={'P','O','R','E','D','D','Y',' ','M','A','N','I','T','E','J','A'};
int size,i;

size = sizeof(arr);

for(i=0;i<size;i++)
printf("%c",arr[i]);

printf("\n");
return 0;

}
