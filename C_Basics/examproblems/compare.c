int DateCompare(int d1,int d2,int m1,int m2,int y1,int y2)
{
/*
int n;
printf("Enter n characters: ");
scanf("%d",&n);

while (n>0)
*/

/*
(printf("Enter Date 1: ");
scanf("%d %d %d",&d1,&m1,&y1);

printf("Enter Date 2: ");
scanf("%d %d %d",&d2,&m2,&y2);
*/

if (y2<y1)
	{
	// printf("%d-%d-%d\n",d2,m2,y2);
return 1;
	}

else if (y1<y2)
	{
	// printf("%d-%d-%d\n",d1,m1,y1);
return 1;
	}	

else if (y1=y2)
	{
	
	if (m2<m1)
	{
	// printf("%d-%d-%d\n",d2,m2,y2);
return 1;
	}

	else if (m1<m2)
        {
        // printf("%d-%d-%d\n",d1,m1,y1);
return 1;
        }
  
	else if (m1=m2)
	{
	
		if (d2<d1)
        	{	
        	// printf("%d-%d-%d\n",d2,m2,y2);
return 1;        	
		}
  
        	else if (d1<d2)
          	{
         	// printf("%d-%d-%d\n",d1,m1,y1);
        return 1;  
		}
     
         	else if (d1=d2)
          	{
	return 1;
		// printf("%d-%d-%d\n",d1,m1,y1);
		}
	}
	}
else 
{
return 0;
}


}

