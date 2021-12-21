#include <iostream>

using namespace std;


int paros(int n);
int paratlan(int n){
 if(n==1){
	return 1;
 }
 return n+paros(n-1);
}
int paros(int n){
 if(n==0){
	return 0;
 }
 return n+paratlan(n-1);
}

int main()
{
    cout << paros(4) << endl;
    cout << paratlan(5) << endl;
    return 0;
}
