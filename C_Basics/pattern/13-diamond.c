/*

        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
*/

#include<stdio.h>
int main()
{
int i,j,n;
printf("Enter n characters: ");
scanf("%d",&n);

for (i=1;i<=n;i++)
{
if (i%2==0)
continue;
for (j=n;j>=i;j--)
{
printf(" ");
}
for (j=1;j<=i;j++)
{
printf("* ");
}
printf("\n");
}

for (i=2;i<=n;i++)
{
if (i%2==0)
continue;
for (j=1;j<i;j++)
{
printf(" ");
}
for (j=n;j>=i;j--)
{
printf(" *");
}
printf("\n");
}

return 0;
}
