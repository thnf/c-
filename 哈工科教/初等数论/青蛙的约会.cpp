#include <iostream>
using namespace std;
long long ex_gcd(long long u,long long  v,long long  &x, long long &y){
  if(v==0){
    x=1,y=0;
    return u;
  }
  long long xx,yy;
  long long g=ex_gcd(v,u%v,xx,yy);
  x=yy,y=xx-u/v*yy;
  return g;
}
int main() {
  long long a,b,m,n,L,x,y;
  cin>>a>>b>>m>>n>>L;
  long long g,A,B;
  A=a-b;B=n-m;
  if(B<0) {
    A=-A;B=-B;
  }
  g=ex_gcd(B,L,x,y);
  if(A%g!=0) cout<<"Impossible";
  else{
    cout<<(x*(A/g)%(L/g)+(L/g))%(L/g);
  }
    return 0;
}