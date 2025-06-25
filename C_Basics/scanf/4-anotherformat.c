// Read a date in the below format, and print it back in another format //

#include<stdio.h>
int main()
{
int dd,mm,yyyy;
printf("Enter the date in dd-mm-yyy:");
scanf("%d-%d-%d", &dd, &mm, &yyyy);
printf("the another format: %d/%d/%d \n", dd, mm, yyyy);
return 0;
}

