#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int v[100][100],n,i,j;
    ifstream in("input.txt");
    in>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            in>>v[i][j];
        }
    }
    for(i=1;i<=n;i++){
        cout<<v[i][1]<<" ";
    }
    for(j=2;j<=n;j++){
        cout<<v[n][j]<<" ";
    }
    for(i=n-1;i>=1;i--){
        cout<<v[i][n]<<" ";
    }
    for(j=n-1;j>=2;j--){
        cout<<v[1][j]<<" ";
    }
    return 0;
}
