//1)Write the calculator program using function pointers for add, sub, mul, div and mod functions, using a single function pointer.

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
int main() {
    int x,y;
    char ch;
    printf("Enter the two numbers :");
    scanf("%d%d",&x,&y);
    printf("Enter the operation :");
    scanf(" %c",&ch);
    int (*p)(int,int)=add;
    int (*q)(int,int)=sub;
    int (*r)(int,int)=mul;
    int (*s)(int,int)=div;
    int (*t)(int,int)=mod;

    switch(ch)
    {
    case '+' : printf("result is %d\n",p(x,y));
               break;
    case '-' : printf("result is %d\n",q(x,y));
               break;
    case '*' : printf("result is %d\n",r(x,y));
               break;
    case '/' : printf("result is %d\n",s(x,y));
               break;
    case '%' : printf("result is %d\n",t(x,y));
               break;
    }
    return 0;
}
