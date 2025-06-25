#include<stdio.h>
#define SIZEOF_VAR(var) ((char *)(&var + 1) - (char *)(&var))

int main()
{
int a;
char p;
double s;
printf("size of int %lu\n",SIZEOF_VAR(a));
printf("size of char %lu\n",SIZEOF_VAR(p));
printf("size of double %lu\n",SIZEOF_VAR(s));
}

