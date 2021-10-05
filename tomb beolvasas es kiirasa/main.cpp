#include <iostream>

using namespace std;

int main()
{

    int tomb[100];
    int n, i;

    n = 10;
    //tomb beolvasasa
    for(i=0; i<n; i++){
        cout << "tomb[" << i << "]= ";
         cin >> tomb[i];
    }
    cout << endl;
    //tomb kiirasa
    for(i=0; i<n; i++){
        cout << tomb[i] << " ";
    }
    return 0;
}
