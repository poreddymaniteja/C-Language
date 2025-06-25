/*4)"Write the calculator program using a function that accepts an array of function pointers and the operand values and operator character as arguments and invokes appropriate function based on the character. In main function, simply invoke this function by sending the array and operator character and operands as input.
  eg.,
  in main
  case '+' :invokeptr( fparr, x,y, ch);


  invokeptr(int (*fptr[]) (int,int) , int x, int y ,char ch)
  {
//based on ch value, choose which index to apply on fptr and invoke the function
}*/
#include <stdio.h>
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
int div(int a,int b)
{
	return a/b;
}
int mod(int a,int b)
{
	return a%b;
}
void invokeptr(int (*p[])(int,int),int x,int y,char ch)
{
	switch(ch)
	{
		case '+' : printf("%d\n",p[0](x,y));
			   break;
		case '-' : printf("%d\n",p[1](x,y));
			   break;
		case '*' : printf("%d\n",p[2](x,y));
			   break;
		case '/' : printf("%d\n",p[3](x,y));
			   break;
		case '%' : printf("%d\n",p[4](x,y));
			   break;
	}
}
int main() {
	int x,y;
	char ch;
	int (*p[5])(int,int)={add,sub,mul,div,mod};
	printf("Enter the two numbers :");
	scanf("%d%d",&x,&y);
	printf("Enter the operation :");
	scanf(" %c",&ch);
	invokeptr(p,x,y,ch); 
	return 0;
}
