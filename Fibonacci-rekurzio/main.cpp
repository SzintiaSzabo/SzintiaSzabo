#include <iostream>

using namespace std;


 long fib(long n){
 if(n==0){return 0;}
 if(n==1){return 1;}
 return fib(n-1)+fib(n-2);
 }


int main()
{
		long n;
		cout << "kerem a szamot" << endl;
		cin >> n;
    cout << "A Fibonacci sorozat " << fib(n);
    return 0;
}
