/*
* * * * *
   * * * *
      * * *
         * *
            *
*/

#include<stdio.h>
int main()
{
int i,j,n,k;
 
printf("Enter the n characters: ");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
    for(j=1;j<i;j++)

    {
        printf(" ");
    }
	for(k=5;k>=i;k--)
	{
		printf("*");
	}
    
    printf("\n");
}

return 0;
}

