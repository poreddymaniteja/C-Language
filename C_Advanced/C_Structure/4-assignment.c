/*4) write a function to take the array of structures as arguments and return the structure element with the oldest date of birth.
  return the structure variable using return statement and array element with index. Return type of the function will be struct student.
  eg.,
  struct student oldest student(struct student arr[])
  { 
  return arr[i]; // find the index at which date of  birth is oldest using date comparison function
  }*/

#include<stdio.h>
struct dateofbirth
{
	int d,m,y;
};


struct dateofbirth oldest_student(struct dateofbirth arr[],int n)
{
	int d1=9999;
	int m1=9999;
	int y1=9999;
	int a=0,i;

	for(i=0;i<n;i++)
	{
		if((arr[i].y < y1) ||( (arr[i].y==y1) && (arr[i].m < m1) )|| ((arr[i].m==m1) &&  (arr[i].d < d1)) || (arr[i].d==d1)) 
		{
			y1=arr[i].y;
			m1=arr[i].m;
			d1=arr[i].d;
			a=i; 
		}
        
                printf("%d-%d-%d i=%d \n",d1,m1,y1,i);
	}
	printf("%d",a);
   return arr[a];
}

int main()
{
	int i,n;
	printf("Enter the size of the array :");
	scanf("%d",&n);
	struct dateofbirth dob[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the the stdent-%d dob :",i+1);
		scanf("%d%d%d",&dob[i].d,&dob[i].m,&dob[i].y);
	}
	
        struct dateofbirth older= oldest_student(dob,n);
	printf("The oldest date is %d/%d/%d\n",older.d,older.m,older.y);
	return 0;
}
