#include<stdio.h>
int main()
{

int d,m,y,i=0,n;

printf("Enter n characters: ");
scanf("%d",&n);

while(n>0)
{

printf("date of birth of candidate %d: ",i++);
scanf("%d%d%d",&d,&m,&y);

IsValidDate(int d,int m,int y);
n--;
/*
printf("date of birth of candidate %d: ",i++);
scanf("%d%d%d",&d2,&m2,&y2);

IsValidDate(int d,int m,int y);
*/

DateCompare(int d1,int d2,int m1,int m2,int y1,int y2);

printf("The candidate born in %d-%d-%d is older\n", DateCompare d,DateCompare m,DateCompare y);

}
return 0;
}




// for n number of date of births, check all the call functions by using isvaiddate function,datecompare function, leapyear function, printdate format, print datesubscript, print month name functions in c language and give me a good code which in which i can excecute in linux terminal
