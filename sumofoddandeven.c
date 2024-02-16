#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int e = 0;
    int o= 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            e += a[i];
        } else {
           o+= a[i];
        }
    }
    printf("The sum of the even numbers in the array is %d\n", e);
    printf("The sum of the odd numbers in the array is %d\n", o);

    return 0;
}
