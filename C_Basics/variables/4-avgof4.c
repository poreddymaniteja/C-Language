//4-average of 4 numbers//

#include<stdio.h>
int main()
{
float a,b,c,d,avg;
printf("enter any four numbers: \n");
scanf("%f %f %f %f", &a, &b, &c, &d);
avg=((a+b+c+d)/4);
printf("average of 4 numbers: %f\n",avg);
return 0;
}
