/*7) Try to send a character array / character pointer / string constant as arguments and see what is the size returned, and understand the difference.*/

#include<stdio.h>
#define mysizeof(y)((char *)(&y+1)-(char *)&y)
int main()
{
char arr[]="hello world";
char *ptr="hi";
const char *str="master";
printf("size of array:%d\n",mysizeof(arr));
printf("size of ptr:%d\n",mysizeof(ptr));
printf("size of str:%d\n",mysizeof(str));

return 0;
}

/*size of array:12
size of ptr:8
size of str:8
*/
