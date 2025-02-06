// question no-23
#include <stdio.h>
void sortAscending(int arr[], int n) {
 int temp;
 for (int i = 0; i < n - 1; i++) {
 for (int j = i + 1; j < n; j++) {
 if (arr[i] > arr[j]) {
 temp = arr[i];
 arr[i] = arr[j];
 arr[j] = temp;
 }
 }
 }
}
void sortDescending(int arr[], int n) {
 int temp;
 for (int i = 0; i < n - 1; i++) {
 for (int j = i + 1; j < n; j++) {
 if (arr[i] < arr[j]) {
 temp = arr[i];
 arr[i] = arr[j];
 arr[j] = temp;
 }
 }
 }
}
int main() {
 int n;
 printf("Enter the number of elements: ");
 scanf("%d", &n);
 int arr[n];
 printf("Enter the elements:\n");
 for (int i = 0; i < n; i++) {
 scanf("%d", &arr[i]);
 }
 int largest = arr[0], smallest = arr[0];
 for (int i = 1; i < n; i++) {
 if (arr[i] > largest) largest = arr[i];
 if (arr[i] < smallest) smallest = arr[i];
 }
 printf("Largest: %d\nSmallest: %d\n", largest, smallest);
 sortAscending(arr, n);
 printf("Ascending order: ");
 for (int i = 0; i < n; i++) {
 printf("%d ", arr[i]);
 }
 printf("\n");
 sortDescending(arr, n);
 printf("Descending order: ");
 for (int i = 0; i < n; i++) {
 printf("%d ", arr[i]);
 }
 printf("\n");
 return 0;
}