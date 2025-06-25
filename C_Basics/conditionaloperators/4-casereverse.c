// Input an alphabet. Output its case reverse //

#include<stdio.h>
int main()
{
char c;
printf("Enter a character(alphabet): ");
scanf("%c",&c);

c>=97?c<=122?printf("%c\n",c-32):printf("%c is not character(alphabet)\n",c):c>=65?c<=90?printf("%c\n",c+32):printf("%c is not character(alphabet)\n",c):printf("%c is not not character(alphabet)\n",c);

return 0;
}

