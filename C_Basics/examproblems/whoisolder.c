#include<stdio.h>
int main()
{
int D,M,Y,d1,m1,y1,d2,m2,y2;
printf("Enter the DOB od user 1: ");
scanf("%d%d%d",&d1,&m1,&y1);

printf("Enter the DOB od user 2: ");
scanf("%d%d%d",&d2,&m2,&y2);

if(y1>y2)
{
printf("%d-%d-%d is older\n",d2,m2,y2);
}

else if(y1<y2)
{
printf("%d-%d-%d is older\n",d1,m1,y1);
}

else if(y1==y2)
{
Y=y1;
	if(m1>m2)
	{
	printf("%d-%d-%d is older\n",d2,m2,Y);
	}
	
	else if(m1<m2)
	{
	printf("%d-%d-%d is older\n",d1,m1,Y);
	}
	
	else if(m1==m2)
	{
	M=m1;
	
		if(d1>d2)
		{
		printf("%d-%d-%d is older\n",d2,M,Y);
		}

		else if(d1<d2)
		{
		printf("%d-%d-%d is older\n",d1,M,Y);
		}
		
		else if(d1==d2)
		{
		D=d1;
		printf("Both of them having same DOB: %d-%d-%d \n",D,M,Y);
		}
	}
}

return 0;

}


