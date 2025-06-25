// Read a 4 digit integer into a variable, using scanf and print it in the below format using escape sequences //

#include<stdio.h>
int main()
{
int a;
printf("Enter the 4 digit value:");
scanf("%d", &a);
printf("%d\b\b\b   \n",a);
printf("%d\b\b  \n",a);
printf("%d\b   \n",a);
printf("%d    \n",a);
printf("\n");
printf("%d\b\b\b   \n",a);
printf("%d\b\b  \r \n",a);
printf("%d\b \r  \n",a);
printf("%d\r   \n",a);
return 0;
}


