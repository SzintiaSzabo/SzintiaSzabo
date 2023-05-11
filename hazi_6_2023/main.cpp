#include <iostream>

using namespace std;

int main()
 {
    int v[100][100],n,k=1,szam=0;
    float S=0,avg;
    cout<<"n=";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<"v["<<i<<"]["<<j<<"]=";
            cin>>v[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
                if(i<j && v[i][j]>0){
                    k==1;
                }else{
                k==0;
                }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
                if(i<j && v[i][j]>0){
                    szam++;
                    S=S+v[i][j];
                }
        }
    }
    avg=S/szam;
    if(k==1){
        cout<<"atlag= "<<avg;
    }else if(k==0){
    cout<<"Nincs";
    }

    return 0;
}
