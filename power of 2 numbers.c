#include <stdio.h>
long long int power(int a, int n) {
    if (n == 0) {
        return 1;
    }
    return a * power(a, n - 1);
}

int main() {
    int a, n;
    scanf("%d %d", &a, &n);
    long long int result = power(a, n);
    printf("The value of %d power %d is %lld\n", a, n, result);

    return 0;
}
