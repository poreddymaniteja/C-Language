//4) Create a dynamic array of integers. Take input from user , sort the array and display the output.

#include<stdio.h>  
#include<stdlib.h>

int main()
{
	int i,temp;
	int *p=(int *)malloc(10*sizeof(int));

	for(i=0;i<10;i++)
	{
		scanf("%d",&p[i]);
	}

	for(i=0;i<10;i++)
	{
		for(int j=i+1;j<10;j++)
		{
			if(p[i]>p[j])
			{
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
}
		for(i=0;i<10;i++)
		{
			printf("%d\n",p[i]);
		}

return 0;
}

