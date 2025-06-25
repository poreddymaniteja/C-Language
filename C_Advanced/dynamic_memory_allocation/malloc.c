#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,*p1,n,i;
	printf("the number of elements to eneter:");
	scanf("%d",&n);
	p=(int *)calloc(n,sizeof(int));
        p1=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&p1[i]);
	}


	for(i=0;i<n;i++)
	{
		printf("%d",p[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",p1[i]);
	}
        printf("\n");
        printf("%p\n",p);
        printf("%p\n",p1);
	return 0;

}
