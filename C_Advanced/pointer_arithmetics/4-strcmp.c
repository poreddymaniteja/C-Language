// 4) int  strcmp (char s1[], char s2[]); //

#include<stdio.h>
int mystrcmp(char str1[],char str2[]);
int main()
{
        int d,size;
        printf("Enter the size :");
        scanf("%d",&size);
        char str1[size],str2[size];
        printf("Enter the string-1 :");
        scanf(" %[^\n]s",str1);
        printf("Enter the string-2 :");
        scanf(" %[^\n]s",str2);
        d=mystrcmp(str1,str2);
        if(d==-1)
                printf("The given string-2 is big\n");
        else if(d==0)
                printf("The given string 1 & 2 are equal\n");
        else if(d==1)
                printf("The given string-1 is big\n");
        return 0;
}

int mystrcmp(char *str1,char *str2)
{
        int i=0,j;
        while(*(str1+i)!=0)
        {

                i++;
        }
        i++;
        j=i;
        printf("\n%d\n",i);
        i=0;
        while(i<j)
        {
                if(*(str1+i)< *(str2+i))
                        return -1;
                else if(*(str1+i) > *(str2+i))
                        return 1;
                i++;
        }
        return 0;
}
