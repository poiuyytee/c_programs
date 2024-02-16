#include <stdio.h>
int findMax(int arr[], int n, int index, int max) {
    if (index == n) {
        return max;
    }
    if (arr[index] > max) {
        max = arr[index];
    }
    return findMax(arr, n, index + 1, max);
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    int result = findMax(arr, n, 1, max);
    printf("Maximum element in the array is %d\n", result);

    return 0;
}
