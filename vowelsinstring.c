#include <stdio.h>

int main() {
    char input_string[100];
   
    scanf("%s", input_string);

    int vowel_count = 0;
    for (int i = 0; input_string[i] != '\0'; i++) {
        char cur = input_string[i];
        if (cur == 'a' || cur == 'e' || cur == 'i' || cur == 'o' || cur == 'u' ||
            cur == 'A' || cur == 'E' || cur == 'I' || cur == 'O' || cur == 'U') {
            vowel_count++;
        }
    }

    printf("Number of vowels: %d\n", vowel_count);

    return 0;
}
