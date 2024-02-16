#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    if (n >= 100 && n <= 999) {

        int m = (n / 10) % 10;

        if (m % 3 == 0) {
            printf("Trendy Number\n");
        } else {
            printf("Not a Trendy Number\n");
        }
    } else {
        printf("Invalid Number\n");
    }

    return 0;
}
