#include <iostream>

using namespace std;

int main()
{

    int szam, oszto;
    bool prim = true;
    cout << "a szam=";
    cin >> szam;

    oszto=2;
    do {
        if (szam%oszto == 0){
            prim = false;
        }
        oszto++;
    } while (oszto<szam/2+1);
       if (prim) {
        cout << "A szam prim";
    } else {
        cout << "A szam nem prim";
    }
 return 0;
}
