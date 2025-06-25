#include<stdio.h>
void areaperi(float r,float *a,float *p)
{

	*a=22/7*r*r;
	*p=2*22/7*r;

}

int main()
{
	float r;
	printf("Enter the radius:");
	scanf("%f",&r);

	float a,p;
	areaperi(r,&a,&p);
	printf("Area=%f\nperimeter=%f\n",a,p);
	return 0;
}

