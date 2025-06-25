#include<stdio.h>
int main()
{
	int n,l=0,m=0,j=0,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	for(i=0;i<n;i++)
	{
		if(j<a[i])
		{
			j=a[i];
			m++;
			if(l<m)
				l=m;
		}
		else
		{
			j=a[i];
			m=1;
			if(l<m)
				l=m;
		}
	}
	printf("%d",l);
}

