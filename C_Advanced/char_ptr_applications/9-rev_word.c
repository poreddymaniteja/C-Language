/*9) implement a function to receive a sentence as input, and return the string with the words reversed,
eg., input: Kernel Masters is best for embedded systems.
output: systems embedded for best is Masters Kernel. */


#include<stdio.h>
#include<string.h>
void strrev(char*str)
{
int n=strlen(str);
int i=n-1,j=n-1;
while(i>=0)
{
if(str[i] == ' ' || i == 0)
        {
            if (i == 0)
            {
                printf("%.*s ", j-i+1, &str[i]);
            }
            else
            {
                printf("%.*s ", j-i, &str[i+1]);
            }
            j=i-1;
        }
        i--;
    }
    printf("\n");
}
int main()
{
    char str[] = "Kernel Masters is best for embedded systems";
    printf("%s\n", str);
    strrev(str);
}

/* Kernel Masters is best for embedded systems
systems embedded for best is Masters Kernel 
*/
