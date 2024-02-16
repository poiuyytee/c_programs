#include <stdio.h>
int main()
{
  int n, o, r, f, result = 0;
    scanf("%d", &n);
    o = n;
    while (o != 0) {
        r = o % 10;
        f= 1;
        for (int i = 1; i <= r; i++) {
            f *= i;
        }
        result += f;
        o /= 10;
    }

    if (result == n) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
}
