//6) Count and print how many girls and how many boys there are in the class.

#include<stdio.h>
struct gender
{
char gender;
};
int main()
{
int i,n,count1=0,count2=0;
printf("Enter the number of students :");
scanf("%d",&n);
struct gender gen[n];
for(i=0;i<n;i++)
{
printf("Enter the student-%d gender\n",i+1);
scanf(" %c",&gen[i].gender);
if(gen[i].gender=='m' || gen[i].gender=='M')
count1++;
else if(gen[i].gender=='f' || gen[i].gender=='F')
count2++;
}
printf("The number of boys present in the class is %d\n",count1);
printf("The number of girls present in the class is %d\n",count2);
return 0;
}
