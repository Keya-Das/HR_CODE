// question no-10
#include <stdio.h>
int main() {
 int matrix[3][3];
 int largest;
 printf("Enter elements of a 3x3 matrix:\n");
 for (int i = 0; i < 3; i++) {
 for (int j = 0; j < 3; j++) {
 scanf("%d", &matrix[i][j]);
 }
 }
largest = matrix[0][0];
 for (int i = 0; i < 3; i++) {
 for (int j = 0; j < 3; j++) {
 if (matrix[i][j] > largest) {
 largest = matrix[i][j];
 }
 }
 }
printf("The largest number in the matrix is: %d\n", largest);
 return 0;
}