#include<iostream>
using namespace std;
int main()
{
 int n,f,l,res;
  scanf("%d",&n);
  n=abs(n);
  f=n/1000;
  l=n%10;
  res=f+l;
  printf("%d",res);
  return 0;
}
