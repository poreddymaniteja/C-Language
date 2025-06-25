/*
Try experimenting with the below array syntaxes and see the results,check their sizes, try to also read values for elements and print them:
int arr[5] = {};
int arr[10] = {2.4,5.6,7.3};
int arr[3] = {1,2,3,4,5};
int arr[0] = {};
int arr[0] = {1,2,3,4,5};
int arr[] = {};
int arr[‘a’];
*/

#include<stdio.h>
int main()
{

/*
int arr[5]={};
printf("%lu\n",sizeof(arr));
*/

/*
float arr[10]={2.4,5.6,7.3};
int i;
printf("%lu\n",sizeof(arr));

for(i=0;i<10;i++)
{
printf("%f ",arr[i]);
}
*/

/*
int arr[3]={1,2,3,4,5};
int i;
printf("%lu\n",sizeof(arr));
 
for(i=0;i<3;i++)
{
printf("%d ",arr[i]);
}
printf("\n");
*/

/*
int arr[0]={};
int i;
printf("%lu\n",sizeof(arr));
  
for(i=0;i<0;i++)
{
printf("%d ",arr[i]);
}
*/

///*
int arr[0]={1,2,3,4,5};
int i;
printf("%lu\n",sizeof(arr));
   
for(i=0;i<0;i++)
{
printf("%d ",arr[i]);
}
//*/

/*
int arr[]={};
int i;
printf("%lu\n",sizeof(arr));
*/   

/*
int arr['a'];
int i,size;
printf("%lu\n",sizeof(arr));
size=(sizeof(arr)/4);
   
for(i=0;i<size;i++)
{
printf("%d ",arr[i]);
}
printf("\n");
*/

return 0;
}
