#include <iostream>

using namespace std;

int main()
{

    unsigned long long n, tomb[1000];

    cout << "n= ";
    cin >> n;
    tomb[0] = 0;
    tomb[1] = 1;
    for(int i=2; i < n+1; i++){
        tomb[i] = tomb[i-1] + tomb[i-2];
    }

    for(int i=n; i > 0; i--){
        cout << " F(" << i << ") = "<< tomb[i]<< endl;
    }
    //cout << " F(" << n << ") = "<< tomb[n]<< endl;
    return 0;
}
