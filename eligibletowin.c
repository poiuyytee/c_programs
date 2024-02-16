#include<iostream>

#include<iomanip>

using namespace std;

int main()

{

int a,b,x,y;

 std::cin>>a>>b>>x>>y;

 float m = a/6;

 int n = y/6;

 int p = y%6;

 float k = ((float)n + (float)p/10);

 float d = x/k;

 float f = b/m;

 std::cout<<m<<"\n";

 std::cout<<std::fixed<<std::setprecision(1)<<k<<"\n";

 std::cout<<d<<"\n"<<f<<"\n";

 if(d>f)

   std::cout<<"Eligible to Win";

 else

   std::cout<<"Not Eligible to Win";

}
