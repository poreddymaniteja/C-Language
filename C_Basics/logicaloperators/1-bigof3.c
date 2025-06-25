//Read 3 numbers and print which of them is the biggest//

#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the values of a, b & c: ");
scanf("%d%d%d",&a,&b,&c);

if (a>b && a>c)
{
printf("%d is the biggest number\n",a);
}

else if (b>a && b>c)
{
printf("%d is the biggest number\n",b);
}

else
{
printf("%d is the biggest number\n",c);
}

return 0;
}
