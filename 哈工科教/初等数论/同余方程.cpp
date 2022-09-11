/*a   b      n
  45x=20(mod 35)*/
#include<iostream>
#include<algorithm>
using namespace std;
int ex_gcd(int u,int v,int &x,int &y){
  if(v==0){
    x=1,y=0;
    return u;
  }
  int xx,yy;
  int g=ex_gcd(v,u%v,xx,yy);
  x=yy;
  y=xx-u/v*yy;
  return g;
}
int main(){
  int a,b,n,x,y;
  cin>>a>>b;
  int g;
  g=ex_gcd(a,b,x,y);
  int t=b/g;
  int ans=(x%t+t)%t;
  cout<<ans;
  return 0;
}
