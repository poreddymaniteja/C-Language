#include<stdio.h>
int main()
{
int a,b,c,d,e,T;
printf("Enter the Amount T: ");
scanf("%d",&T);

if (a=(T/2000))
{
printf("No of 2000/- notes: %d\n",a);
}

if (a<=0) 
{
printf("No of 2000/- notes: %d\n",a*0);
}

if (b=(T-(a*2000))/500)
{
printf("No of 500/- notes: %d\n",b);
}

if (b<=0)
{
printf("No of 500/- notes: %d\n",b*0);
}

if (c=(T-(a*2000)-(b*500))/200)
{
printf("No of 200/- notes: %d\n",c);
}

if (c<=0)
{
printf("No of 200/- notes: %d\n",c*0);
}

if (d=(T-(a*2000)-(b*500)-(c*200))/100)
{
printf("No of 100/- notes: %d\n",d);
}

if (d<=0)
{
printf("No of 100/- notes: %d\n",d*0);
}

if (e=(T-(a*2000)-(b*500)-(c*200)-(d*100))/50)
{
printf("No of 50/- notes: %d\n",e);
}

if (e<=0)
{
printf("No of 50/- notes: %d\n",e*0);
}

else if (T<=0)
{
printf("Not a valid number\n");
}

return 0;
}

