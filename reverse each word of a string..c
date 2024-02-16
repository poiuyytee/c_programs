#include <stdio.h>
#include <string.h>

void reverse_word(char *word, int start, int end) {
    while (start < end) {
        char temp = word[start];
        word[start++] = word[end];
        word[end--] = temp;
    }
}

void reverse_string(char *str) {
    int start = 0, end = strlen(str) - 1;
    reverse_word(str, start, end);
    
    while (*str) {
        char *word_start = str;
        while (*str && *str != ' ')
            str++;
        reverse_word(word_start, 0, str - 1 - word_start);
        if (*str)
            str++;
    }
}

int main() {
    char input[100];
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0; // Removing newline if present
    reverse_string(input);
    printf("%s\n", input);
    return 0;
}
