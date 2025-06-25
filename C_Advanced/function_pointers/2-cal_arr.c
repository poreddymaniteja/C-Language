//2)Rewrite the calculator program using an array of function pointers.
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
int fun1(int (*p[])(int,int),int a,int b)
{
return p[0](a,b);
}
int fun2(int (*p[])(int,int),int a,int b)
{
return p[1](a,b);
}
int fun3(int (*p[])(int,int),int a,int b)
{
return p[2](a,b);
}
int fun4(int (*p[])(int,int),int a,int b)
{
return p[3](a,b);
}
int fun5(int (*p[])(int,int),int a,int b)
{
return p[4](a,b);
}
int main() {
    int x,y;
    char ch;
    printf("Enter the two numbers :");
    scanf("%d%d",&x,&y);
    printf("Enter the operation :");
    scanf(" %c",&ch);
    int (*p[])(int,int)={add,sub,mul,div,mod};
    switch(ch)
    {
    case '+' : printf("result is %d\n",fun1(p,x,y));
               break;
    case '-' : printf("result is %d\n",fun2(p,x,y));
               break;
    case '*' : printf("result is %d\n",fun3(p,x,y));
               break;
    case '/' : printf("result is %d\n",fun4(p,x,y));
               break;
    case '%' : printf("result is %d\n",fun5(p,x,y));
               break;
    }
    return 0;
}
