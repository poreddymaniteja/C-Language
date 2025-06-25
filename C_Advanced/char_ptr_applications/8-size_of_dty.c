/*8) Define a sizeof macro that will find the size of a given data type as a parameter. use pointers. */

#include<stdio.h>
#define MYSIZEOF(x) ((size_t)((x*)0+1)-(size_t)((x*)0))
int main()
{
printf("size of int %ld\n",MYSIZEOF(int));
printf("size of char %ld\n",MYSIZEOF (char));
printf("size of double %ld\n",MYSIZEOF (double));
printf("size of float %ld\n",MYSIZEOF (float));
}

/* size of int 4
size of char 1
size of double 8
size of float 4
*/
