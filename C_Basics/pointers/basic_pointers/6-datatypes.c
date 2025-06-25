// declare different pointers with different data types. Print the sizes of the pointer variables using sizeof operator. Why do u think all of them are giving same size irrespective of the data type ? Beacuse address will be always 8 Bytes.

#include<stdio.h>
int main()
{
int *p1;
float *p2;
char *p3;
long *p4;
double *p5;

printf("%ld\n",sizeof(p1));
printf("%ld\n",sizeof(p2));
printf("%ld\n",sizeof(p3));
printf("%ld\n",sizeof(p4));
printf("%ld\n",sizeof(p5));

return 0;
}
