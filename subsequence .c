#include <stdio.h>
#include <string.h>
int isSubsequence(char *s, char *t) {
    int s_len = strlen(s);
    int t_len = strlen(t);
    int s_index = 0, t_index = 0;
    while (s_index < s_len && t_index < t_len) {
        if (s[s_index] == t[t_index]) {
            s_index++;
        }
        t_index++;
    }
    if (s_index == s_len) {
        return 1; 
    } else {
        return 0;
    }
}
int main() {
    char s[1000], t[1000];
    scanf("%s%s", t, s);
    int result = isSubsequence(s, t);
    printf("%d\n", result);
    return 0;
}
