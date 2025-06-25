// 5) int strncmp(char s1[]. char s2[], int n); //

#include<stdio.h>
int my_strncmp(char *str1,char *str2,int num);
int main()
{
int num,d;
char str1[30],str2[30];
printf("Enter the string-1 :");
scanf(" %[^\n]s",str1);
printf("Enter the string-2 :");
scanf(" %[^\n]s",str2);
printf("Enter the number :");
scanf("%d",&num);
d=my_strncmp(str1,str2,num);
if(d==-1)
printf("The given strings-2 is big\n");
else if(d==0)
printf("The given both the strings are same\n");
else if(d==1)
printf("The given string-1 is big\n");
return 0;
}

int my_strncmp(char *str1,char *str2,int num)
{
int i,j;
for(i=0;*(str1+i)!=0;i++);
i++;
j=i;
for(i=0;i<num;i++)
{
if(*(str1+i) < *(str2+i))
return -1; 
else if(*(str1+i) > *(str2+i))
return 1;
}
return 0;
}
