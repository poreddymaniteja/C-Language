/* using while ,do while and for loops :

* * * * *
* * * *
* * *
* *
*

*/

#include<stdio.h>
int main()
{
int i,j,n;
printf("Enter n characters: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
    {
    for(j=n;j>=i;j--)
        {
        printf("* ");
        }
    printf("\n");
    }
}
