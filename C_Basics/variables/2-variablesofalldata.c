// variables of all data types and then read and print their values //

#include<stdio.h>
int main()
{
 int a;
 unsigned int b;
 short int c;
 unsigned short int d;
 long int e;
 long unsigned int f;
 char g;
 unsigned char h;
 double i;
 long double j;
 float m;
 scanf("%d",&a);
 printf("Enter the value : %d\n",a);
 scanf("%u",&b);
 printf("Enter the value : %u\n",b);
 scanf("%hd",&c);
 printf("Enter the value : %hd\n",c);
 scanf("%hu",&d);
 printf("Enter the value : %hu\n",d);
 scanf("%ld",&e);
 printf("Enter the value : %ld\n",e);
 scanf("%lu",&f);
 printf("Enter the value : %lu\n",f);
 scanf(" %c",&g);
 printf("Enter the value : %c \n",g);
 scanf(" %c",&h);
 printf("Enter the value : %c \n",h);
 scanf("%lf",&i);
 printf("Enter the value : %lf\n",i);
 scanf("%LF",&j);
 printf("Enter the value : %LF\n",j);
 scanf("%f",&m);
 printf("Enter the value : %f\n",m);
 return 0;
}
