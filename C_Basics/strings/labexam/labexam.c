#include<stdio.h>
#include<string.h>

void mystrrev(char str[])
{
        int i,j;
        int l=strlen(str);
        for(i=0,j=l-1;i<j;i++,j--)
                {
                str[i]=str[i]+str[j];
                str[j]=str[i]-str[j];
                str[i]=str[i]-str[j];
                }
}

void mystrrevword(char str[])
{
        int i,j,k;
        int c=0,d=0;
        L: for(i=c;str[i]!=' '&&str[i]!='\0';i++)
                        c++;
        for(j=d,k=c-1;j<k;j++,k--)
                {
                str[j]=str[j]+str[k];
                str[k]=str[j]-str[k];
                str[j]=str[j]-str[k];
                }
        if(str[j-1]!='\0')
                {
                c+=1;
                d=c;
                goto L;
                }
}

int main()
{
        char str[100];
        printf("Enter a string: ");
        scanf("%[^\n]s",str);
        mystrrev(str);
        mystrrevword(str);
        printf("%s\n",str);

}
