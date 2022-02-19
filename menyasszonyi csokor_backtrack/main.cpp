#include <iostream>

using namespace std;

int N = 5;
string virag[] = {"rozsa", "tulipan", "gerbera","orchidea", "liliom"};

bool lehet(string csokor[], int n, string ujvirag)
{
    int szamlalo=0;
    for(int i = 0; i<n; i++)
    {
        if (csokor[i] == ujvirag)
        {
            szamlalo++;
        }
    }
    if(szamlalo>1){
        return false;
    }
    return true;
}

void kiir(string csokor[], int n)
{
    for(int i = 0; i<n; i++)
    {
        cout << csokor[i] << " " ;
    }
    cout << endl;
    return;
}

void backtrack(string csokor[], int n, int index)
{
    if (n == N)
    {
        kiir(csokor, n);
        return;
    }

    for(int i = index; i<4; i++)
    {

        if (lehet(csokor, n, virag[i]))
        {

            string tempcsokor[N];

            for(int j = 0; j<n; j++)
            {
                tempcsokor[j] = csokor[j];
            }

            tempcsokor[n] = virag[i];

            backtrack(tempcsokor, n+1, i);
        }
    }
}

int main()
{

    string csokor[] = {""};

    backtrack(csokor, 0, 0);
    return 0;
}
