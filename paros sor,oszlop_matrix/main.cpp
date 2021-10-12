#include <iostream>

using namespace std;

int main()
{
	  int v[100][100], i, j, n, S=0;
	  cout << "n=";
	  cin >> n;
	  for (i=0; i<n; i++){
			for (j=0; j<n; j++){
				cin >> v[i][j];
			}
	  }

		for (i=0; i<n; i++){
			for (j=0; j<n; j++){
				if (i%2==0 && j%2==0){
					S= S+ v[i][j];
				}
			}
	  }
        cout << S << endl;

    return 0;
}
