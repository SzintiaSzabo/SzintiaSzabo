#include <iostream>

using namespace std;

int main()
{
    int v[100][100], n, i, k;
    cout << "n=";
    cin >> n;
    for (i=0; i<n; i++){
			for (k=0; k<n; k++){
				cout << "v[" << i << "][" << k << "]=";
				cin >> v[i][k];
			}
    }
    for (i=0; i<n; i++){
			for (k=0; k<n; k++){
				if (v[i][k] % 2==0){
					cout << v[i][k] << " ";
				}
			}
    }
    cout << endl;
    return 0;
}
