// Input 3 digits, read them into three different characters. Make one integer out of them and display//
//Eg., input 345.(stored as char c =‘3’,b=‘4’,d=‘5’.)//
//Output : int i = 345. ( store 345 in integer i and print the value of i as output)//
// hint- any digital character can be converted to a corresponding digit by subtraction with '0'//

#include<stdio.h>
int main()
{
int i;
char c,b,d;

printf("Enter the character integer digits of c, b & d: ");
scanf("%c %c %c",&c,&b,&d);

i=(((c-'0')*100)+((b-'0')*10)+((d-'0')*1));
printf("%d\n",i);

return 0;
}
