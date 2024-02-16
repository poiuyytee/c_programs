#include <stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
   int row=(n-1)/3;
   int col=(n-1)%3;//remainder//
   printf("%d %d",row,col);
   return 0;
}
