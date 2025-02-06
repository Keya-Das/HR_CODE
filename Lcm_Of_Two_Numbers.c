// question no-3
#include <stdio.h>
int gcd(int a, int b) {
 while (b != 0) {
 int remainder = a % b;
 a = b;
 b = remainder;
 }
 return a;
}
int main() {
 int a, b;
 printf("Enter two numbers:\n");
 scanf("%d %d", &a, &b);
 if (a < 0) a = -a;
 if (b < 0) b = -b;
int gcd_value = gcd(a, b);
  int lcm = (a * b) / gcd_value;
 printf("LCM is: %d\n", lcm);
 return 0;
}