#include <iostream>

using namespace std;

int Mandel(int c, int k){
if (c==0){
	return 0;
}
if(k==0){
	return c;
}
return Mandel(c,k-1)*Mandel(c,k-1)+c;
}
int main()
{
	  int c, k;
    cout << "c=";
    cin >> c;
    cout << "k=";
    cin >> k;
    cout << Mandel(c,k);
    return 0;
}
