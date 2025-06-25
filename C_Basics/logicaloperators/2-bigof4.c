//Read 4 numbers and print which of them is biggest//

#include<stdio.h>
int main()
{
int a,b,c,d;
printf("Enter the values a,b,c & d: ");
scanf("%d%d%d%d",&a,&b,&c,&d);

if (a>=b && a>=c && a>=d)
{
printf("%d is the biggest number\n",a);
}

else if (b>a && b>=c && b>=d)
{
printf("%d is the biggest number\n",b);
}

else if (c>a && c>b && c>=d)
{
printf("%d is the biggest number\n",c);
}

else
{
printf("%d is the biggest number\n",d);
}

return 0;
}
