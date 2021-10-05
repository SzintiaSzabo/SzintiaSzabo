#include <iostream>

using namespace std;

int main()
{
     int szam, oszto;
    bool prim = true;
    cout << "Kerem a szamot ";
    cin >> szam;
    oszto=2;
    while( oszto<szam/2+1){
        if (szam%oszto==0){
            prim = false;
        }
        oszto++;
    }
    if (prim) {
        cout << " a szam prim";
    } else {
        cout << "a szam nem prim";
    }
    return 0;
}
