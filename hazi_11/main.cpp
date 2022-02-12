#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, pos, hossz, elem;
    vector<int> v;
    cout << "n=";
    cin >> n;

    for(int i=0; i<n; i++){
        cout << "v[" << i << "]= ";
        cin >> elem;
        v.push_back(elem);
    }

    cout << "pos=";
    cin >> pos;
    cout << "hossz=";
    cin >> hossz;
    v.erase(v.begin() + pos, v.begin() + pos + hossz);

    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}
