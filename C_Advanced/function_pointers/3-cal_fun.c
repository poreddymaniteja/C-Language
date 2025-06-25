/*3)"Write the calculator program using a function that accepts a function pointer and the operand values as arguments and invokes it. In the main function, simply invoke this function by sending the appropriate function address, based on the operator chosen.
eg.,
in main
case '+' :invokeptr(add , x,y);


invokeptr(int (*fptr) (int,int) , int x, int y)
{
printf(""%d\n"",fptr(x,y));
}"*/

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
void invokeptr(int (*p)(int,int),int x,int y)
{
printf("Result is %d\n",p(x,y)); 
}
int main() {
    int x,y;
    char ch;
    printf("Enter the two numbers :");
    scanf("%d%d",&x,&y);
    printf("Enter the operation :");
    scanf(" %c",&ch);
    //int (*p[])(int,int)={add,sub,mul,div,mod};
    switch(ch)
    {
    case '+' : invokeptr(add,x,y);
               break;
    case '-' : invokeptr(sub,x,y);
               break;
    case '*' : invokeptr(mul,x,y);
               break;
    case '/' : invokeptr(div,x,y);
               break;
    case '%' : invokeptr(mod,x,y);
               break;
    }
    return 0;
}
