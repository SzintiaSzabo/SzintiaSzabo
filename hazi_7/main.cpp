#include <iostream>

using namespace std;

void cuburi(int n){
int t[1000];

  for(int i=1; i<=n; i++){
    t[i]=i*i*i;
  }
  for(int i=n; i>0; i--){
    cout << t[i] <<" ";
  }
}

int main()
{
    int n;
    cout << "n=";
    cin >> n;
    cuburi(n);
    return 0;
}
