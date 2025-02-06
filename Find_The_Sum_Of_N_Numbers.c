// question no-28
#include <stdio.h>
int main() {
    int n, i, number, sum = 0;
    printf("Enter the number of values (n): ");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i) {
        printf("Enter number %d: ", i);
        scanf("%d", &number);
        sum += number; 
    }
    printf("The sum of the %d numbers is: %d\n", n, sum);
    return 0;
}