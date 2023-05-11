#include <iostream>

using namespace std;

int main()
{
  int v[100],n,P,S=0;
  cout<<"n=";
  cin>>n;
  for(int i=1;i<=n;i++){
    P=1;
  for(int j=1;j<=i;j++){
    P=P*j;
  }
  if(i%2==0){
    S=S-P;
  }else{
  S=S+P;
  }
}
  cout<<S;
  return 0;
}
