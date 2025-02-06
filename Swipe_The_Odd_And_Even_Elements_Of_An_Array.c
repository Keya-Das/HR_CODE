// question no-22
#include <stdio.h>
int main() {
 int n;
 printf("Enter the number of elements in the array: ");
 scanf("%d", &n);
 int arr[n];
 printf("Enter the elements of the array:\n");
 for (int i = 0; i < n; i++) {
 scanf("%d", &arr[i]);
 }
 for (int i = 0; i < n - 1; i++) {
 if (arr[i] % 2 == 0 && arr[i + 1] % 2 != 0) {
 int temp = arr[i];
 arr[i] = arr[i + 1];
 arr[i + 1] = temp;
 i++; 
 }
 }
 printf("Array after swapping odd and even elements:\n");
 for (int i = 0; i < n; i++) {
 printf("%d ", arr[i]);
 }
 printf("\n");
 return 0;
}