// Read n characters from user, and print if each character is vowel or not //

#include<stdio.h>
int main()
{
int n;
char c;
printf("Enter n characters: ");
scanf("%d",&n);

while(n>0)
{
printf("Enter a character: ");
scanf(" %c",&c);

if (c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
{
printf("%c is a vowel\n",c);
}

else
{
printf("%c is not a vowel\n",c);
}
n--;
}

return 0;
}

