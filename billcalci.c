#include <stdio.h>
int main()
{
  int n,c;
  scanf("%d", &n);
  if(n<=200)
  {
    c=(0.5*n);
    printf("Rs.%d",c);
  }
  else if(n<=400)
  {
    c=(0.65*n)+100;
    printf("Rs.%d",c);
  }
  else if(n<=600)
  {
    c=(0.80*n)+200;
    printf("Rs.%d",c);
  }
  else
  {
    c=(1.25*n)+425;
    printf("Rs.%d",c);
  }
   return 0;
}
