#include <iostream>

using namespace std;

int main()
{
    int szam, ujszam=0, hatvany=1, szamjegy;
    cout<< "szam=";
    cin>> szam;
    while (szam>0){
      szamjegy=szam%2;
      szam=szam/2;
      ujszam=ujszam+hatvany*szamjegy;
      hatvany=hatvany*10;

    }

    cout <<ujszam << endl;
    return 0;
}
