#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	  int v[100][100], i, j, n, P=1;
	  ifstream in ("input.txt");
	  in >> n;
	  bool prim = true;
	  for (i=0; i<n; i++){
			for (j=0; j<n; j++){
				in >> v[i][j];

	  }
	}
      for (i=0; i<n; i++){
			 for (j=0; j<n; j++){
					if (i<j){
			 	  for (int oszto=2; oszto<v[i][j]/2+1; oszto++){
						if (v[i][j]%oszto==0){
							prim = false;
						}
			 	  }
					}
             if (prim==true){
							P*=v[i][j];
             }
			 }
      }

		cout << P << endl;
    return 0;
}
