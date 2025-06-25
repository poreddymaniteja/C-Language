//5) Implement itoa function and return the string from the function. Print the result in main. itoa function takes an integer as input, and stores the integer in a string.


#include<stdio.h>
#include<stdlib.h>



char * myito_a(int num)
{
	int i=0,j,k,temp;
	char *p=(char *)malloc(10*sizeof(char));
	while(num)
	{
		j=num%10;
		p[i]=j+48;
		num=num/10;
		i++;
	}
	p[i]='\0';
	for(i=0;p[i]!='\0';i++);
	for(j=i-1,k=0;j>k;j--,k++)
	{
		temp=p[k];
		p[k]=p[j];
		p[j]=temp;
	}
	return p;
}

int main()
{
	int num,i;
	scanf("%d",&num);
	char *p=myito_a(num);
	printf("%s",p);

	return 0;
}

