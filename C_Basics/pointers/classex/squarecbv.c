#include<stdio.h>

int square(int a){
a=a*a;
return a;
}

int main()
{
int a=4;
int b=square(a);
printf("%d\n",b);
return 0;
}

