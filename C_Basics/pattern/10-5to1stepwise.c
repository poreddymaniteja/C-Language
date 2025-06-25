/*
5
5 4
5 4 3
5 4 3 2
5 4 3 2 1
*/

#include<stdio.h>
int main()
{
int i,j,n,k=5;
 
printf("Enter the n characters: ");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
    for(j=1;j<=i;j++)
    {
        printf("%d ",k--);
    }
    k=5;
    printf("\n");
}

return 0;
}
