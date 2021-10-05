
#include <iostream>
#include <stdlib.h>

using namespace std;


int main()
{

    int i, j, aux, v[100], n, k=0;
    bool csere=false;
    n = 10;
    for (i=0; i<n; i++)
    {
        v[i] = rand()%100;
    }
    //buborekos rendezes algoritmus
    do
    {
        //kezdetben nincs csere
        csere = false;
        //elmegyunk a tomb utolso elotti elemeig
        for (i=0; i<n-1-k; i++)
{
            if (v[i]>v[i+1])
            {
                aux=v[i+1];
                v[i+1]=v[i];
                v[i]=aux;
                //volt csere, tehat a p valtozo 1 lesz
                csere = true;
            }
        }
        //a k erteket noveljuk, mert az utolso k helyen a legnagyobb elemek vannak
        k++;
    }
    while(csere);
    //kiiras
    for (i=0; i<n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
