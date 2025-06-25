/* 
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/

#include<stdio.h>
int main()
{
int i,j,n,k=0;
printf("Enter n characters: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
    {
    for(j=1;j<=i;j++)
        {
        printf("%d ",k=!k);
        }
    printf("\n");
    }
}
