#include<stdio.h>
int main()

/*

{
int arr[10];
printf("%lu\n",sizeof(arr));
}

// output: 40

*/

/*

{
int arr[10];
int i;

for(i=0;i<10;i++)
{
scanf("%d",&arr[i]);
}

for(i=0;i<10;i++)
{
printf("%d %p\n",arr[i],&arr[i]);
}

}

*/

/*
output:
0
1
2
3
4
5
6
7
8
9
0 0x7fff94b28550
1 0x7fff94b28554
2 0x7fff94b28558
3 0x7fff94b2855c
4 0x7fff94b28560
5 0x7fff94b28564
6 0x7fff94b28568
7 0x7fff94b2856c
8 0x7fff94b28570
9 0x7fff94b28574
*/


/*

{
int l;
scanf("%d",&l);
int arr[l];

int i;
printf("%lu",sizeof(arr));

for(i=0;i<l;i++)
{
scanf("%d",&arr[i]);
}

for(i=0;i<l;i++)
{
printf("%d %p\n",arr[i],&arr[i]);
}

}

*/

/*
output:
arr[i]= 4
size of (arr)= 16

1
2
3
4
1 0x7ffc4a959e60
2 0x7ffc4a959e64
3 0x7ffc4a959e68
4 0x7ffc4a959e6c

*/

/*

{
int arr[10]={1,2,3,4,5,6,7,8,9,10};
int i;

for(i=0;i<10;i++)
{
printf("%d\n",arr[i]);
}

}

*/

/*
output: 
1
2
3
4
5
6
7
8
9
10
*/

/*

{
int arr[10]={1,2,3};
int i;

for(i=0;i<10;i++)
{
printf("%d\n",arr[i]);
}

}

*/

/*
output:
1
2
3
0
0
0
0
0
0
0
*/

/*

{
int arr[10]={1};
int i;
 
for(i=0;i<10;i++)
{
printf("%d\n",arr[i]);
}

}

*/

/*
output:
1
0
0
0
0
0
0
0
0
0
*/

/*
{
int arr[10]={0};
int i;
  
for(i=0;i<10;i++)
{
printf("%d\n",arr[i]);
}
}

*/

/*
output:
0
0
0
0
0
0
0
0
0
0
*/

/*
{
int arr[5]={1,2,3,4,5,6,7};
int i;
  
for(i=0;i<5;i++)
{
printf("%d\n",arr[i]);
}
}
*/ 

// excess warning

/*

{
int arr[]={1,2,3,4,5,6,7,8,9,10};
printf("arr[%lu]\n",(sizeof(arr))/4);
}

*/ 

// output: arr[10]

/*

{
int arr[5]={[2]=3,[4]=6};
int i;

for(i=0;i<5;i++)
{
printf("%d\n",arr[i]);
}
}

*/

/*
output:
0
0
3
0
6
*/
