// 6) int stricmp (char s1[], char s2[]); //

#include<stdio.h>
int my_stricmp(char *str1,char *str2);
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
        d=my_stricmp(str1,str2);
        if(d==-1)
                printf("The given string-2 is big\n");
        else if(d==1)
                printf("The given string-1 is big\n");
        else if(d==0)
                printf("Both the strings are equal\n");
        return 0;
}
int my_stricmp(char *str1,char *str2)
{
        int i,j;
        for(i=0;*(str1+i)!=0;i++)
                i++;
        i++;
        j=i;
        for(i=0;*(str1+i)!=0 || *(str2+i)!=0 ;i++)
        {
                if(*(str1+i)>='a' && *(str1+i)<='z')
                        str1[i]=str1[i]-32;


                if(*(str2+i) >='a' && *(str2+i) <='z')
                        *(str2+i) = *(str2+i)-32;
        }
        for(i=0;i<j;i++)
        {
                if((str1+i)<(str2+i))
                        return -1;
                else if(*(str1+i) > *(str2+i))
                        return 1;
        }
        return 0;
}
