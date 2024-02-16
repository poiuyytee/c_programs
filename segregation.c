#include <stdio.h>
void segregateArray(int arr[], int n) {
    int left = 0, right = n - 1;
    
    while (left < right) {
        while (arr[left] % 2 == 0 && left < right)
            left++;
        
        while (arr[right] % 2 != 0 && left < right)
            right--;
        
        if (left < right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
}
int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    segregateArray(arr, n);
    printf("Array after Segregation\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

