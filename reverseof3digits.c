#include <stdio.h>
int main()
{
   int d1,d2,c1,c2,sumd,sumc;
  scanf("%d %d %d %d",&d1,&c1,&d2,&c2);
  sumd=(d1+d2)+(c1+c2)/100;
  sumc=(c1+c2)%100;
   printf("%d\n%d",sumd,sumc);
   return 0;
}
