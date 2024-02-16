#include <stdio.h>

int main() {
   int a,b,c;
  scanf("%d %d %d " ,&a,&b,&c);
  if (c%b == 0||c <= b ||c%b == 1)
  {
    printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
