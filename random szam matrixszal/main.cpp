#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int v[100][100],n;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            v[i][j] = rand()%10;

        }
    }

    for(int i=0; i<n; i++){
        v[i][i]=0;
    }

    for(int i=0; i<n; i++){
        for(int j=0 ;j<n; j++){
            if(i>j){
                v[i][j]=-v[i][j];
            }

            cout << v[i][j] << "  ";
        }
        cout << endl;
    }
    return 0;
}
