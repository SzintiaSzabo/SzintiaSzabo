#include <iostream>
using namespace std;
int main()
{
  int v[100][100],j,i,n,D=0,Pf=1,Pm=1;
  cout <<"n=";
  cin >> n;
     for(i=0;i<n;i++){
      for(j=0;j<n;j++){
       cin >> v[i][j];
        }
    }
      for(i=0;i<n;i++){
       for(j=0;j<n;j++){
         if(i==j){
         Pf=Pf*v[i][j];
        }
         if(i+j==n-1){
         Pm=Pm*v[i][j];
        }
           D=Pf-Pm;
       }
    }

    cout <<"D="<<D;
    return 0;
}
