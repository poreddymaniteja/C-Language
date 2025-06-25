/*8)  Write a function that takes two sorted integer arrays as input, and returns an array of integers from both arrays in sorted order, excluding duplicate numbers. 
Assume that the input arrays are sorted.
eg., array1 : 10,12,13,14,15,16
array2 : 9,12,15,19,20
output array3 : 9,10,12,13,14,15,16,19,20
*/

#include<stdio.h>
#include<stdlib.h>
int * sorting(int *d,int n);
int main()
{
        int j,n,a,b,c;
        printf("Enter the size of array-1&2&3:");
        scanf("%d%d%d",&a,&b,&c);
        int *p=(int *)malloc(a * sizeof(int));
        int *q=(int *)malloc(b * sizeof(int));
	int *r=(int *)malloc(c * sizeof(int));
        printf("Enter the elements in array-1:");
        int i;
        for(i=0;i<a;i++)
        {
                scanf("%d",&p[i]);
        }
        printf("Enter the elements in array-2 :");
        for(i=0;i<b;i++)
         {
                 scanf("%d",&q[i]);
         }
	p=sorting(p,a);
	q=sorting(q,b);
        for(j=0;j<a;j++)
        {
                printf("%d\n",p[j]);
        }
	for(j=0;j<b;j++)
          {
                  printf("%d\n",q[j]);
          }
	for(i=0;i<a;i++)
         r[i]=p[i];
	for(j=0;j<b;i++,j++)
         r[i]=q[j];
        r=sorting(r,c);
	for(j=0;j<c;j++)
            {
                    printf("%d\n",r[j]);
            }

        return 0;
}

int * sorting(int *d,int n)
{
 int i,j,temp;
 for(i=0;i<n-1;i++)
          {       
                  for(j=i+1;j<n;j++)
                  {       
                          if(d[i]>d[j])
                          {
                                  temp=d[i];
                                  d[i]=d[j];
                                  d[j]=temp;
                          }
                  }
          }
return d; 
}
