## Date: 30JUL2024    Topic: Operators Precedence & Associativity Assignments

//1)
/*
#include <stdio.h>
int main()
{
  int a = 10, b = 20, c = 30;
 
  if (c > b > a)  
   printf("TRUE");
  else
    printf("FALSE");
  return 0;
}
*/

// o/p: False



//2)
/*
#include <stdio.h>
int main()
{
int a = 2;
a *= 3 + 4;
printf("%d",a);
return 0;
}
*/

// o/p: a=14


//3)
/*#include<stdio.h>
int main()
{
    int a;
    a = 1, 2, 3;
    printf("%d", a);
    return 0;
}
*/

// o/p: a=1


//4)
/*
#include<stdio.h>
void main()
{
    int a = 10, b = 0, c = 7;
   printf("%d", a ? b : c == 7);
   printf("%d", c = c || a && b);
}
*/

// o/p: a=0 c=1 (or) 7


//5)
/*
#include<stdio.h>
void main()
{
  int a = 10, b = 20, c = 30;
 c < b < a ? printf("TRUE\n") : printf("FALSE\n");
}
*/

// o/p: true


//6)
/*
#include<stdio.h>
void main()
{
int x,y,z;
x = y = z = 10;
(x + y = z && y >0 ) ? printf ("True") : printf("False");

}
*/

// Error


//7)
/*
#include<stdio.h>
void main()
{
int a=10,b=20,c=30;
int code = 1;
code > 1 ?   a = b + c : a = 0;
printf("%d",a);
}
*/




//8)
/*
#include<stdio.h>
void main()
{
int c = 1,d;
(c >= 1) ? printf(" 1 "): printf(" 2  "),printf(" 3 ");
(c < 1) ? printf(" 1 "): printf(" 2  "),printf(" 3 ");
d = (c >= 1) ? 1: 2,3; //d =
d = (c < 1) ? 1: 2,3; //d =
d = (c < 1) ? 1: (2,3); //d =
d = (c >= 1) ? 1: (2,3); //d =
}
*/




//9)
/*
#include<stdio.h>
int main()
{
    int x = 2, y = 0;
    int z = (y++) ? 2 : y == 1 && x;
    printf("%d\n", z);
    return 0;
}
*/




//10)
/*
#include<stdio.h>
void main()
{
int a,b,c,sum;
sum = (a=8,b=7,c=9,a+b+c);
printf("%d\n",sum);
}
*/




//11)
/*
#include <stdio.h>
void main()
{
int x,a = 10,b = 20,c = 40;
x = a+b < c;
printf ("%d",x);
}
*/




//12)
/*
#include<stdio.h>
void main()
{
int x=3,a = 2,b = 10;
x *= a + b;
printf("%d\n",x);
}
*/




//13)
/*
#include<stdio.h>
void main()
{
int x,a = 4,b = 5,c = 6;
x = a <= b || b == c;
printf("%d\n",x);
}
*/




//14)
/*
#include<stdio.h>
void main()
{
int a = 10,b = 20,c = 15;
int x = 3,y=4,z;
z = x ? y :( a ? b : c);
printf("%d\n",z);
}
*/




//15)
/*
#include<stdio.h>
void main()
{
int c;
c = 0,1,2,3 ? 1 : 0;
printf("%s\n",c ? "Hi" : "Hello");
}
*/




//16)
/*
#include<stdio.h>
void main()
{
int c = printf("ab") + printf("bc") * printf("345");
printf("%d",c);
}
*/




//17)
/*
#include<stdio.h>
void main()
{
int a=1,b=2,c=3,d=4;
a=a>b?c>d?0:1:1000;
printf(“%d”,a);
}
*/




