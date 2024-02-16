#include <stdio.h>
void c(int n) {
    int count = 0;
    while (n != 1) {
        printf("%d\n", n);
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        count++;
    }

    printf("1\n%d\n", count);
}

int main() {
    int n;

    // Input the starting number of the sequence
    scanf("%d", &n);

    // Call the function to generate and print the Collatz Sequence
    c(n);

    return 0;
}
