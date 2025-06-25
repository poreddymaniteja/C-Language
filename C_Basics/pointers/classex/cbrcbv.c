#include<stdio.h>

void swapcbv(int a,int b)
  {
  int t;
  t=a;
  a=b;
  b=t;
  printf("Swaping in cbv:%d\t%d\t%p\t%p\n\n",a,b,&a,&b);
  }

  void swapcbr(int *a,int *b)
  {
  int t;
  t=*a;
 *a=*b;
 *b=t;
 printf("Swaping in cbr:%d\t%d\t%p\t%p\n\n",*a,*b,a,b);

 }

int main()

{
 int a,b;
 printf("Enter two numbers:");
 scanf("%d%d",&a,&b);
 printf("Before swaping:%d\t%d\n\n",a,b);
 swapcbv(a,b);
 printf("main after swap cbv:a=%d\t & a=%p\t b=%d\t & b=%p\n\n",a,&a,b,&b);
 swapcbr(&a,&b);
 printf("main after swap cbr:a=%d\t & a=%p\t b=%d\t & b=%p\n\n",a,&a,b,&b);
 return 0;
}

/* Enter two numbers:1 2
Before swaping:1 2

Swaping in cbv:2 1	0x7fff62eb390c	0x7fff62eb3908

main after swap cbv:a=1	 & a=0x7fff62eb3930	 b=2	 & b=0x7fff62eb3934

Swaping in cbr:2 1	0x7fff62eb3930	0x7fff62eb3934
*/
