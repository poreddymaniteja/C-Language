/* 5) Implement your own string reverse function using the above swap function to swap the edges while reversing.
try calling the string reverse function using
1) string variable
2) string constant */

#include<stdio.h>
void swap(char *,char *);
int main()
{
    //char str1[50];
    const char str1[50];
    int i,j,k;
    printf("enter a characters:");
    scanf("%[^\n]",str1);
    for(i=0;str1[i]!=0;i++);
    for(j=0,k=i-1;j<i/2;j++,k--)
    {
    swap(&str1[j],&str1[k]);
    }

    printf("swap:%s",str1);

}
void swap(char *p,char *q)
{
    char t;
    t=*p;
    *p=*q;
    *q=t;
}
