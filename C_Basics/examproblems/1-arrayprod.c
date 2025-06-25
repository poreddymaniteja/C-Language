#include<stdio.h>
int main()
{

int prod,i,e,size,n=1,c=0;

printf("Enter the size of array: ");
//scanf("%d",&size);

int arr[size];

printf("Enter the elements: ");
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
c=c++;
}

printf("Enter prod: ");
scanf("%d",&prod);

while(prod<size)
{
if(prod==i)
continue;

else
i++;

n=n*arr[i];
c--;
if(c<=0)
break;
}


/*
for(;prod<size;)
{

if(prod==i)
{
continue;
}

n=n*arr[i];
c--;

}
*/

printf("%d",n);

return 0;

}

