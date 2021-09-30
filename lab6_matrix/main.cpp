#include <iostream>

using namespace std;

int main()
{
   int i, j, m, n, S1=0, S2=0, v[100][100];
   cout << "n=";
	 cin >>n;
	 cout << "m=";
	 cin >>m;
   for (i=0; i<n; i++){
			for (j=0; j<m; j++){
				  cout << "v[" << i << "][" << j << "]=";
					cin >> v[i][j];
			}
   }
    for (i=0; i<n; i++){
			 for (j=0; j<m; j++){
					if (i+j == n-1){
						S1 = S1 + v[i][j];
					}
			 }
						S2 = S2 + v[i][j];
    }
    cout << S1 <<endl;
    cout << S2 <<endl;


    return 0;
}
