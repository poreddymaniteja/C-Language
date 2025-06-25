/*6
Declare a two dimensional array of characters, read names from the user and print them back with each individual character format (%c) in */

#include <stdio.h>

int main() {
    int i, j, n;
    
   
    printf("Enter the number of names: ");
    scanf("%d", &n);
    
    
    char names[n][50];
    
    
    for (i = 0; i < n; i++) {
        printf("Enter name %d: ", i + 1);
        scanf("%s", names[i]); 
    }
    
   
    printf("\nNames printed character by character:\n");
    for (i = 0; i < n; i++) {
        printf("Name %d: ", i + 1);
        for (j = 0; names[i][j] != '\0'; j++) {
            printf("%c ", names[i][j]); 
        }
        printf("\n");
    }
    
    return 0;
}

/* Enter the number of names: 2
Enter name 1: andry
Enter name 2: and

Names printed character by character:
Name 1: a n d r y 
Name 2: a n d 
*/

