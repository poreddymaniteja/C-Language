IsLeapYear(int y)

{
scanf("%d",&y);

if(y%400==0)
{
return 1;
}

if(y%4==0)
{
if(y%100!=0)
return 1;		

else
return 0;
}
		
else
{
retrun 0;
}
}






