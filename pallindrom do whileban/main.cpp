#include <iostream>

using namespace std;

int main()
{

    int szam, ideiglenes, szamjegy, ujszam;

    cout << "szam=";
    cin >> szam;

    ujszam=0;
    ideiglenes=szam;
 do {
        szamjegy=ideiglenes % 10;
        ideiglenes=ideiglenes / 10;
        ujszam=ujszam*10+szamjegy;
    } while (ideiglenes>0);

    if (ujszam==szam)
    {
        cout << "A szam pallindrom";
    }
    else
    {
        cout << "A szam nem pallindrom";
    }

    return 0;
}

