// C program to check whether a character is a vowel or not using switch statement //

#include<stdio.h>
int main()
{
char c;
printf("Enter a character(alphabet): ");
scanf("%c",&c);

switch (c)
{
case 'a': printf("%c is a vowel\n",c);
break;
case 'e': printf("%c is a vowel\n",c);
break;
case 'i': printf("%c is a vowel\n",c);
break;
case 'o': printf("%c is a vowel\n",c);
break;
case 'u': printf("%c is a vowel\n",c);
break;
case 'A': printf("%c is a vowel\n",c);
break;
case 'E': printf("%c is a vowel\n",c);
break;
case 'I': printf("%c is a vowel\n",c);
break;
case 'O': printf("%c is a vowel\n",c);
break;
case 'U': printf("%c is a vowel\n",c);
break;

default: printf("%c is  not a vowel\n",c);
}

return 0;
}
