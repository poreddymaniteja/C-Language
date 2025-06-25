// Write a program to Set, clear and toggle a particular bit using bit wise operator?

#include<stdio.h>
#define mySET_BIT(x,p) x|(0x1<<p)
#define myCLEAR_BIT(x,p) x&(~(0x1<<p))
#define myTOGGLE_BIT(x,p) x^(0x1<<p)
#define myCHECK_BIT(x,p) x&(0x1<<p)


int main()
{
int x,p,check;

printf("Enter the hexa value: ");
scanf("%x",&x);

printf("Enter the position: ");
scanf("%d",&p);

printf("After set: %x\n",mySET_BIT(x,p));
printf("After clear: %x\n",myCLEAR_BIT(x,p));
printf("After toggle: %x\n",myTOGGLE_BIT(x,p));
check=myCHECK_BIT(x,p);

if(check!=0)
printf("ON\n");
else
printf("OFF\n");

return 0;

}

