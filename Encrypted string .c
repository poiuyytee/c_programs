#include <stdio.h>
void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}
int decryptCode(int code) {
    char codeStr[10];
    sprintf(codeStr, "%d", code);
    int length = 0;
    while (code / 10 != 0) {
        length++;
        code /= 10;
    }
    length++;
    for (int i = 0; i < length - 1; i += 2) {
        swap(&codeStr[i], &codeStr[i + 1]);
    }
    sscanf(codeStr, "%d", &code); 
    return code;
}
int main() {
    int encryptedCode;
    scanf("%d", &encryptedCode);
    int decryptedCode = decryptCode(encryptedCode);
    printf("%d\n", decryptedCode);
    return 0;
}
