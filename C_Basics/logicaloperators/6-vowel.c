//Read a character and print if it is a vowel or not.//

#include<stdio.h>
int main()
{
char ch;
printf("enter the character\n");
scanf("%c",&ch);
if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
printf(" given character is vowel\n");
else
printf("not a vowel/n");
return 0;
}

// output//

/* enter the character
A
given character is vowel

enter the character
a
given character is vowel

enter the character
3
not a vowel   */

