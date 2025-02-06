// question no-20
#include <stdio.h>
int main() {
 int n, element, count = 0;
 printf("Enter the number of elements in the array: ");
 scanf("%d", &n);
 int arr[n];
 printf("Enter the elements of the array:\n");
 for (int i = 0; i < n; i++) {
 scanf("%d", &arr[i]);
 }
 printf("Enter the element to search for: ");
 scanf("%d", &element);
 for (int i = 0; i < n; i++) {
 if (arr[i] == element) {
 count++;
 }
 }
 if (count > 0) {
 printf("Element %d is present and its frequency is: %d\n", element, count);
 } else {
 printf("Element %d is not present in the array.\n", element);
 }
 return 0;
}