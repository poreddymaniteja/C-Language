// For n students from a class, read 6 subject marks for every student, and calculate their percentage of marks, and print who is the topper of all (print the student number) //

#include<stdio.h>
int main()
{
int id,x=1,n,a,s1,s2,s3,s4,s5,s6;
float per,top=0;
printf("Enter n character: ");
scanf("%d",&n);

while (n>0)
{

printf("Enter 6 subject marks: ");
scanf("%d%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5,&s6);

per=(((s1+s2+s3+s4+s5+s6)/600.0)*100);

printf("student %d percentage is: %f Percentage\n",x,per);

if(per>top)
{
top=per;
id=x;
}
x++;
n--;
}

printf("Topper id is: %d\n",id);

return 0;
}


