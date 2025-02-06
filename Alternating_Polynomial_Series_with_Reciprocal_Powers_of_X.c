// question no-17
#include <stdio.h>
#include <math.h>  
int main() {
    int n;
    float X, sum = 0;
    printf("Enter value of X: ");
    scanf("%f", &X);
    printf("Enter the number of terms n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
       
        sum += (pow(-1, i+1)) * (1.0 / i) * pow(X, i);
    }
    printf("Sum of the series: %.6f\n", sum);

    return 0;
}
