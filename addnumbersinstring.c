#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int sum(char *str) {
    int sum = 0;
    char *ptr = str;
    while (*ptr) {
        if (isdigit(*ptr)) {
            sum += atoi(ptr);
            while (isdigit(*ptr)) {
                ptr++;
            }
        } else {
            ptr++;
        }
    }
    return sum;
}
int main() {
    char str[1000];
    scanf("%s", str);
    int result = sum(str);
    printf("%d\n", result);
    return 0;
}
