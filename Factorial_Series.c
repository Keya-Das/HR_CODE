// question no-19
#include <stdio.h>
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
int main() {
    int n;
    float sum = 0;
    printf("Enter a value for n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += (float)i / factorial(i);
    }
    printf("Sum of the series: %.6f\n", sum);
    
     return 0;
}
