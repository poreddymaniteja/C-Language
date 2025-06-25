// check if a character is a vowel or not //

#include<stdio.h>
int main()
{
char c;
printf("Enter any alphabet: ");
scanf("%c",&c);

c=(c>=65)?(c<=90)?c+32:c:c;

(c=='a')?printf("%c is vowel",c):(c=='e')?printf("%c is vowel",c):(c=='i')?printf("%c is vowel",c):(c=='o')?printf("%c is vowel",c):(c=='u')?printf("%c is vowel",c):printf("%c is not a vowel\n",c);

return 0;
}
