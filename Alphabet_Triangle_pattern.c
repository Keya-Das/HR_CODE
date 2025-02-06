// question no-33
#include <stdio.h>
int main() {
    int i, j;
    char letter;
    int n = 5; 
    for (i = 1; i <= n; i++) {
        letter = 'A';  
        for (j = 1; j <= i; j++) {
            printf("%c ", letter); 
            letter++; 
        }
        printf("\n"); 
    }
    return 0;
}
