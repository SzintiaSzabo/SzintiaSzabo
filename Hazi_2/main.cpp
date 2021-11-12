#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in ("input.txt");
    ofstream out ("lnko.out");
    int v[100][100], n, i, j, S1=0, S2=0, lnko;
    in >> n;
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            in >> v[i][j];
        }
    }
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            if(i<j && i+j>n-1){
                S1+=v[i][j];
            }
            if(i>j && i+j<n-1){
                S2+=v[i][j];
             }
        }
    }
          while (S1!=S2){
            if (S1>S2){
                S1=S1-S2;
            }else{
                S2=S2-S1;
            }
          }

     lnko=S1;
     out << lnko << endl;
     in.close();
     out.close();
    return 0;
}
