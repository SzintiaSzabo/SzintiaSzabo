#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n,v[100][100],nr=0,mr=0;
    float k,m,S1=0,S2=0,x;
    ifstream in("input.txt");
    ofstream out("output.txt");
    in>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            in>>v[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i<j && v[i][j]>0){
                nr++;
                S1=S1+v[i][j];
            }
            if(i>j && v[i][j]>0){
                mr++;
                S2=S2+v[i][j];
            }
        }
    }
    k=S1/nr;
    m=S2/mr;
    x=k-m;
    out<<x;
    in.close();
    out.close();

    return 0;
}
