// question no-2
#include <stdio.h>
int main() {
 int a, b;
 printf("Enter two numbers:\n");
 scanf("%d %d", &a, &b);
 if (a < 0) a = -a;
 if (b < 0) b = -b;
while (b != 0) {
 int remainder = a % b;
 a = b;
 b = remainder;
 }
 printf("GCD is: %d\n", a);
 return 0;
}