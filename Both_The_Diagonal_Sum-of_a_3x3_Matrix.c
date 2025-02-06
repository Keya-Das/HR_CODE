// question no-11
#include <stdio.h>
int main() {
 int matrix[3][3];
 int primaryDiagonalSum = 0, secondaryDiagonalSum = 0;
 printf("Enter elements of a 3x3 matrix:\n");
 for (int i = 0; i < 3; i++) {
 for (int j = 0; j < 3; j++) {
 scanf("%d", &matrix[i][j]);
 }
 }
 for (int i = 0; i < 3; i++) {
 primaryDiagonalSum += matrix[i][i]; 
 secondaryDiagonalSum += matrix[i][2 - i];
 }
 printf("Sum of Primary Diagonal: %d\n", primaryDiagonalSum);
 printf("Sum of Secondary Diagonal: %d\n", secondaryDiagonalSum);
 return 0;
}
