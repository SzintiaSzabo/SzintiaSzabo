#include <iostream>

using namespace std;

int hatvany(int x, int n){
if(n==0){
	return 1;
}
return x*hatvany(x, n-1);
}

int main()
{
	  int P=1, x=5, n=3;
	  for(int i=1; i<=n; i++){
			P*= x;
	  }
    cout <<  P << " " << hatvany(x,n) << endl;
    return 0;
}
