#include<stdio.h>
#include<stdlib.h>

//int ant=0;
int  mstr_ncp(char *m,char *ch,int n)
{
int i=0;

while(n--)
{
if(m[i]!=ch[i])
 return 0;

 ++i;

}
//ant++;
return 1;
}

char *index_finder(char *m,char *sub,char *r)
{

int i,l,k,n=0,j;

for(i=0;sub[i];i++);
for(l=0;m[l];l++);
for( k=0;r[k];k++);

int len=l;
char *str = m;
char kernel = (char)malloc(l+1);

  for(j=0;m[j];j++)
  {
    if(mstr_ncp(&str[j],sub,i))
      {
       len =+ k;
       int sh=0,num = k;
       kernel = (char *)realloc(kernel,len);
       
       while(num--)
       kernel[n++] = r[sh++];
  
       j +=(i-1);
      }
     else
     {
      kernel[n++] = m[j];
     }
    
   // printf("%p\n",kernel);
    // printf("%d ",j);
  }
  
  kernel[n]=0;
 
return kernel;
}
 

int main()
{

char m[100],s[105],r[200];

printf("enter the main string ");
scanf(" %[^\n]s",m);

printf("enter the sub string ");
scanf(" %[^\n]s",s);

printf("enter the replace string ");
scanf(" %[^\n]s",r);

char *test = index_finder(m,s,r);

printf("%s",test);

return 0;
}
