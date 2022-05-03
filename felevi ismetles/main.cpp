#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cout<<"k=";
    cin>>k;
    cout<<"n=";
    cin>>n;
    int v[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==0){
                v[i][j]=k*(i+1)-i;
            }else{
            v[i][j]=v[i][j-1]+1;
    }
        }
    }

    return 0;
}
