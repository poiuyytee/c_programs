#include <stdio.h>
#include <math.h>
int main()
{
   float value;
  int rd,ru;
  scanf("%f",&value);
  rd= floor (value);
    ru= ceil(value);
  printf("%d\n",(int)value);
  printf("%d\n",ru);
  printf("%d\n",rd);
   return 0;
}
