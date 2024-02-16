#include <stdio.h>
int sumOfOdd(int arr[], int n, int index);
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int result = sumOfOdd(arr, n, 0);
    printf("Sum = %d\n", result);
    return 0;
}
int sumOfOdd(int arr[], int n, int index) {
    if (index >= n) {
        return 0;
    } else {
        if (arr[index] % 2 != 0) {
            return arr[index] + sumOfOdd(arr, n, index + 1);
        } else {
            return sumOfOdd(arr, n, index + 1);
        }
    }
}
