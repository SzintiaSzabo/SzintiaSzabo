#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int  n, i, j;
	    cout << "n=";
	    cin >> n;
	    int v[n][n];
	    for (i=0; i<n; i++){
	    	v[i][i] = 1;
	    }
			for (i=0; i<n-1; i++){
				for (j=i+1; j<n; j++){
					cout << "v[" << i << "][" <<j << "]=" ;
					cin >> v[i][j];
					v [j][i] = v [i][j];

				}
			}

     for (i=0; i<n; i++){
			for (j=0; j<n; j++){
				cout << v[i][j] << " ";

			}
			cout <<endl;
     }

    return 0;
}
