/*1) Practice scanf and printf on each member of the structure using a structure variable using the below structure template:

struct student
{
int ID;
char name[50];
int marks[6];
int d,m,y;
float per;
char gender
};*/
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
void percen (int *marks,float *per)
{
int i;
float total=0;
for(i=0;i<6;i++)
{
 total+=*(marks+i);
} 
total=total/6.0;
*per=total;
}

int main()
{
struct student s;
int i;
printf("Enter the student id:");
scanf("%d",&s.ID);
printf("Enter the student name :");
scanf(" %[^\n]s",s.name);
printf("Enter the student marks :");
for(int i=0;i<6;i++)
scanf("%d",&s.marks[i]);
printf("Enter the date of birth :");
scanf("%d%d%d",&s.d,&s.m,&s.y);
printf("Enter the gender :");
scanf(" %c",&s.gender);
printf("student id is %d\n",s.ID);
printf("the student name is %s\n",s.name);
printf("the student marks are:");
for(i=0;i<6;i++)
printf("%d ",s.marks[i]);
printf("\n");
percen(s.marks,&s.per);
printf("the percentage is %f\n",s.per);
printf("Gender is %c\n",s.gender);
return 0;
}

/*output - Enter the student id:18 
Enter the student name :tarak ram
Enter the student marks :11 22 33 44 55 66
Enter the date of birth :18 10 2001
Enter the gender :m
student id is 18
the student name is tarak ram
the student marks are:11 22 33 44 55 66 
the percentage is 38.500000
Gender is m
*/
