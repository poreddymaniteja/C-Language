#include<stdio.h>
int main()
{
	int n,b=1,j=0,i,m;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	int prod[n];

	for(i=0;i<n;i++)
	{
		b=1;
		for(m=0;m<n;m++)
		{
			if(m!=j)
			{
				b*=a[m];
			}
		
			else
			{
			continue;
			}
		prod[i]=b;
	}
	j++;
}
for(i=0;i<n;i++)
{
	printf("%d ",prod[i]);
}
return 0;
}
