// check if a character is in the alphabet or not //

#include<stdio.h>
int main()
{
char c;

printf("Enter a character: ");
scanf("%c",&c);

c>='a'?c<='z'?printf("%c is an alphabet\n",c):printf("%c is not an alphabet\n",c):c>='A'?c<='Z'?printf("%c is an alphabet\n",c):printf("%c is not an alphabet\n",c):printf("%c is not an alphabet\n",c);

return 0;
}

