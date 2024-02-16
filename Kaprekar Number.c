#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    
    int square = number * number;
    int original = number;
    int sum = 0;
    int count = 0;
    
    while (square != 0) {
        count++;
        square /= 10;
    }
    
    square = original * original;
    
    for (int i = 0; i < count; i++) {
        int divisor = 1;
        for (int j = 0; j < count - i; j++) {
            divisor *= 10;
        }
        
        int right = square % divisor;
        int left = square / divisor;
        
        if (right != 0 && left != 0 && right + left == original) {
            sum = original;
            break;
        }
    }
    
    if (sum == original) {
        printf("Kaprekar Number");
    } else {
        printf("Not a Kaprekar Number");
    }
    
    return 0;
}
