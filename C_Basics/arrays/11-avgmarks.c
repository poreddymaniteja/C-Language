/*11.Write an average function to return the average of marks of all students in a class. 

float average( int arr[] , int n, int s); 
arr[] contains the number of subjects.
Where 'n' is the number of students and 's' is the number of subjects?*/

#include<stdio.h>
float average(int arr[],int n,int s);
int main()
{
int n,s,i,j;
float c;
printf("Enter the number of subjects and number os students :");
scanf("%d%d",&s,&n);
int arr[s];
for(j=1;j<=n;j++)
{
for(i=0;i<s;i++)
{
scanf("%d",&arr[i]);
c=average(arr,s,n);
}
printf("Average of %d is %f:",j,c);
}
return 0;
}

float average(int arr[],int s,int n)
{
int i,m=0,avg;
for(i=0;i<s;i++)
m=m+arr[i];

return (float)m/s;
}
