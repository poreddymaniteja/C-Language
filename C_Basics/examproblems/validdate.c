int IsValidDate(int d,int m,int y)
{
int n=2024;

while(n<=2024)
{

if(m==1 && d>=1 && d<=31)
{
return 1;
}

else
{
n--;
return 0;
}

if(m==2 && d>=1 && d<=29)
{
return 1;
}

else
{
n--;
return 0;
}

if(m==3 && d>=1 && d<=31)
{
return 1;
}

else
{
n--;
return 0;
}

if(m==4 && d>=1 && d<=30)
{
return 1;
}

else
{
n--;
return 0;
}

if(m==5 && d>=1 && d<=31)
{
return 1;
}

else
{
n--;
return 0;
}

if(m==6 && d>=1 && d<=30)
{
return 1;
}

else
{
n--;
return 0;
}

if(m==7 && d>=1 && d<=31)
{
return 1;
}

else 
{
n--;
return 0;
}

if(m==8 && d>=1 && d<=31)
{
return 1;
}
  
else
{
n--;
return 0;
}

if(m==9 && d>=1 && d<=30)
{
return 1;
}
  
else
{
n--;
return 0;
}
 
if(m==10 && d>=1 && d<=31)
{
return 1;
}

else
{
n--;
return 0;
}

if(m==11 && d>=1 && d<=30)
{
return 1;
}

else
{
n--;
return 0;
}

if(m==12 && d>=1 && d<=31)
{
return 1;
}

else 
{
n--;
return 0;
}

}









/*
int IsValidDate(int d, int m, int y)
{

{
if( m < 1 || m > 12)
    return 0;
}

{
if( d < 1 )
    return 0;
}

switch(m)
    case 1, 3, 5, 7, 8, 10, 12
{      
if( day > 31 )
        return 0;
}
 
    case 4, 6, 9, 11
{      
if( d > 30)
        return 0;
}
     

    case 2
      if IsLeapYear(y) 
{        
if( d > 29)
          return 0;
}       
      else
	{
        if (d > 28)
        {
	return 0; 
        }
      }
      break;

    default:
      return 0;
 }

return 1;
}
*/

int IsLeapYear(int y)
{
  if (y % 4 == 0)
    {
if( y % 100 == 0)
    { 
 if( y % 400 == 0)
{       
 return 1;
} 
     else
{       
 return 0;
}

}
    else
{    
 return 1;
}
     }

  else
    return 0;
  }
}
