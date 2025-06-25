#include<stdio.h>
int main ()
{
   
int a,b,c;
printf("Enter the values of a b and c: ");
scanf("%d%d%d",&a,&b,&c);
 
a>b?a>c?printf("%d is greater\n",a):printf("%d is greater\n",c):b>c?printf("%d is greater\n",b):printf("%d is greater\n",c);

return 0;
}


