//2) Create an array of structures using the above template. read the data for all elements of the array. and print the topper name with the highest percentage. 
#include<stdio.h>
struct student
{
	int ID;
	char name[50];
	int marks[6];
	int d,m,y;
	float per;
	char gender;
};

int main()
{
	int i,n,t=0,k;
	float h=0;
	printf("Enter the number of students :");
	scanf("%d",&n);
	struct student s[n];
	for(i=0;i<n;i++)
	{
		k=0;
		printf("Enter the student id:");
		scanf("%d",&s[i].ID);
		printf("Enter the student name :");
		scanf(" %[^\n]s",s[i].name);
		printf("Enter the student marks :");
		for(int j=0;j<6;j++)
			scanf("%d",&s[i].marks[j]);
		printf("Enter the date of birth :");
		scanf("%d%d%d",&s[i].d,&s[i].m,&s[i].y);
		printf("Enter the gender :");
		scanf(" %c",&s[i].gender);
		for(int j=0;j<6;j++)
			k+=s[i].marks[j];
		if(k>h)
		{
			h=(float)k/6;
			t=i;
		}
	}
	printf("The highest percentage of the student is %f\n",h);
	printf("The student name was %s",s[t].name);
	return 0;

}
