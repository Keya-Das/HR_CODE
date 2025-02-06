// question no-31
#include <stdio.h>
void printRightHalfPyramid(int n) {
    for (int i = 1; i <= n; i++) {  
        for (int j = 1; j <= n - i; j++) {
            printf("  ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}
int main() {
    int n = 5; 
    printRightHalfPyramid(n);
    return 0;
}
