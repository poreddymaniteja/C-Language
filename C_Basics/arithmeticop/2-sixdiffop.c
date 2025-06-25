// read a 4 digit number and print it in the following formats Using Arithmetic Operators //

#include <stdio.h>
int main() 
{
int n,a;
printf("Enter four dight value: ");
scanf("%d",&n);

printf("Output:1\n");
a=n%10;
printf("%d\n",a);
a=(n/10)%10;
printf("%d\n",a);
a=(n/100)%10;
printf("%d\n",a);
a=(n/1000);
printf("%d\n",a);

printf("Output:2\n");
a=(n/1000);
printf("%d\n",a);
a=(n/100)%10;
printf("%d\n",a);
a=(n/10)%10;
printf("%d\n",a);
a=n%10;
printf("%d\n",a);

printf("Output:3\n");
a=(n/1000);
printf("%d\n",a);
a=(n/100);
printf("%d\n",a);
a=(n/10);
printf("%d\n",a);
a=(n);
printf("%d\n",a);

printf("Output:4\n");
a=(n);
printf("%d\n",a);
a=(n/10);
printf("%d\n",a);
a=(n/100);
printf("%d\n",a);
a=(n/1000);
printf("%d\n",a);

printf("Output:5\n");
a=n%10;
printf("%d",a);
a=(n/10)%10;
printf("%d",a);
a=(n/100)%10;
printf("%d",a);
a=(n/1000)%10;
printf("%d\n",a);

printf("Output:6\n");
a=n%10;
printf("   %d\n",a);
a=(n/10)%10;
printf("  %d\n",a);
a=(n/100)%10;
printf(" %d\n",a);
a=(n/1000);
printf("%d\n",a);

return 0;
}
