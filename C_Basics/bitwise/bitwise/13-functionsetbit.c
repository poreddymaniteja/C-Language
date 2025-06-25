/*
Write a functionsetbits(x,p,n,y)that return x with then bits that begin at position p set to the rightmost n bits of y, leaving the other bits unchanged.
e.g. if x = 10101010 (170 decimal) and y = 10100111 (167 decimal) and n = 3 and p = 6 then
you need to strip off 3 bits of y (111) and put them in x at position 10xxx010 to get answer
10111010. Your answer should print out the result in binary form although input can be in
decimal form.
Your output should be like this:
x = 10101010 (binary)
y = 10100111 (binary)
setbits n = 3, p = 6 gives x = 10111010 (binary) 
*/

#include<stdio.h>
int functionsetbits(int x,int p,int n,int y);
int main()
{
    int arr2[10],r;
    int x=200,y=170,n=3,p=6;
    x=functionsetbits(x,p,n,y);
    printf("\nx=%d\n",x);
    for(int i=0;i<8;i++)
    {
        r=x%2;
        arr2[i]=r;
        x=x/2;
    }
    printf("x=");
    for(int j=7;j>=0;j--)
    {
        printf("%d",arr2[j]);
    }
}

int functionsetbits(int x,int p,int n,int y)
{
    int t1=x,t2=y;
    int r,z,z1,temp;
    int arr[10],arr1[10];
    for(int i=0;i<8;i++)
    {
        r=x%2;
        arr[i]=r;
        x=x/2;
        r=y%2;
        arr1[i]=r;
        y=y/2;
    }
    printf("x=");
    for(int j=7;j>=0;j--)
    {
        printf("%d",arr[j]);
    }
    printf("\ny=");
    for(int j=7;j>=0;j--)
        printf("%d",arr1[j]);
    //x=x&143;
    
    t2=t2&((1<<n)-1);
    z=((1<<n)-1)<<(p-n);

    t1=t1&(~z);
    t1=t1|t2<<(p-n);

    //printf("%d",x);
    return t1;

}


/*
#include<stdio.h>
int setbits(int x,int p,int n, int y) 
{

	int y_bits = y & ((1U << n) - 1);
	y_bits <<= p;
	int mask = ~(((1U << n) - 1) << p);
	x &= mask;
	x |= y_bits;

	return x;
}

void print_binary(int num) 
{
	for (int i = 31; i >= 0; i--) 
	{
		putchar((num & (1 << i)) ? '1' : '0');
		if (i % 8 == 0) putchar(' ');
	}
	putchar('\n');
}

int main() 
{
	int x, y, n, p;
	printf("Enter the value of x (in decimal): ");
	scanf("%u", &x);
	printf("Enter the value of y (in decimal): ");
	scanf("%u", &y);
	printf("Enter the number of bits to be set (n): ");
	scanf("%u", &n);
	printf("Enter the position to start setting bits (p): ");
	scanf("%u", &p);
	printf("x = ");
	print_binary(x);
	printf("y = ");
	print_binary(y);
	int result = setbits(x, p, n, y);
	printf("setbits n = %u, p = %u gives x = ", n, p);
	print_binary(result);

	return 0;
}
*/

/*output
  Enter the value of x (in decimal): 12
  Enter the value of y (in decimal): 9
  Enter the number of bits to be set (n): 3
  Enter the position to start setting bits (p): 4
  x = 00000000 00000000 00000000 00001100
  y = 00000000 00000000 00000000 00001001
  setbits n = 3, p = 4 gives x = 00000000 00000000 00000000 00011100
*/
