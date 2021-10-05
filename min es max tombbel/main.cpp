#include <iostream>

using namespace std;

int main()
{
    int i, n;
    int v[100];
    cout << "n=";
    cin >> n;
    for(i=0; i<n; i++){
        cout << "v[" << i << "]=";
        cin >> v[i];
    }
int max=v[0], min=v[0];
    for(i=1; i<n; i++){
        if (max < v[i]){
            max = v[i];
        }
        if (min > v[i]) {
            min = v[i];
        }
    }

    cout << "min: "<< min << endl << "max: " << max;

    return 0;
}
