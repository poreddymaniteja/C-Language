// Write two source files, main.c and swap.c. The main function initializes a two-element array of ints, and then calls the swap function to swap the pair.

#include<stdio.h>
void swap(int *a,int *b);
int main()
{
int i;
int arr[2];
printf("Enter 2 elements: ");

for(i=0;i<2;i++)
{
scanf("%d",&arr[i]);
}

printf("before swapping array internally: %d %d\n",arr[0],arr[1]);

swap(&arr[0],&arr[1]);

printf("after swapping array internally: %d %d\n",arr[0],arr[1]);

return 0;

}

