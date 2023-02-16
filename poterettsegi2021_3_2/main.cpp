#include <iostream>

using namespace std;

int main()
{
    int n,k,a[100][100];
    cout<<"n=";
    cin>>n;
    cout<<"k=";
    cin>>k;
    for(int i=0;i<n;i++){
            a[i][i]=3*(i+1);
    }
    return 0;
}
