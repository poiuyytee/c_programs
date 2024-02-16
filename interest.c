#include <stdio.h>
int main()
{
   float p,n,r,si,a,d,f;
  scanf("%f%f%f",&p,&n,&r);
  si=(p*n*r)/100;
  a=p+si;
  d=si*0.02;
  f=a-d;
   printf("%.2f\n",si);
   printf("%.2f\n",a);
   printf("%.2f\n",d);
   printf("%.2f\n",f);
   return 0;
}
