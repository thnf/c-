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
  cin>>a>>n>>b;
  int g;
  g=ex_gcd(a,n,x,y);
  x*=b/g;
  printf("%d+%d*k \n",x,n/g);
  return 0;
}