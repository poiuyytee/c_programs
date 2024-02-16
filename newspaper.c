#include <stdio.h>

int main() {
    int a, b, c; 
    scanf("%d%d%d", &a,&b,&c);
    int profit = (a * b) - (a * c) - 100;
    printf("%d\n", profit);

    return 0;
}
