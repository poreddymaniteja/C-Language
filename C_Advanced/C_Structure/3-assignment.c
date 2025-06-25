//3) Write a function to compare 2 structures and return 1 if they are equal, and 0 if they are not equal.
#include<stdio.h>
struct student
  {
          int d,m,y;
          char gender;
  };
int compare(struct student s1,struct student s2)
{
if(s1.d==s2.d && s1.m==s2.m && s1.y==s2.y && s1.gender==s2.gender)
return 1;
return 0;
}
int main()
{
int i,n=2;
struct student s[n];
for(i=0;i<n;i++)
{
printf("enter the student-%d :\n",i+1);
printf("enter the date,month and year :");
scanf("%d%d%d",&s[i].d,&s[i].m,&s[i].y);
printf("Enter the gender :");
scanf(" %c",&s[i].gender);
}
int d=compare(s[0],s[1]);
if(d==1)
printf("The given two structures both are equal");
else if(d==0)
printf("The given two structues both are not equal");
return 0;
}
/*output - enter the student-1 :
enter the date,month and year :10 12 2001
Enter the gender :m
enter the student-2 :
enter the date,month and year :10 12 2001
Enter the gender :m
The given two structures both are equal*/
