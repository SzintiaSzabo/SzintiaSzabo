#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str, szo;
    cout << "Kerem az elso szot ";
    getline(cin, str);
    cout << "Kerem a masodik szot ";
    getline (cin, szo);
    size_t found = szo.find(" ");
    str.append(szo, 0, found);
    cout << str;

    return 0;
}
