#include <iostream>

using namespace std;

int main()
{
    int a[100],n,k,nr,S=0;
    cout<<"n=";
    cin>>n;
    cout<<"k=";
    cin>>k;
    for(int i=1;i<=n;i++){
        cout<<"a["<<i<<"]=";
        cin>>a[i];
        }
        for(int i=1;i<=n;i++){
            nr=0;
            while(a[i]!=0){
                a[i]=a[i]/10;
                nr++;
            }
            if(nr>k){
                S++;
            }
        }
        cout<<"tobb mint k szamjeggyel rendelkezo szam= "<<S;
    return 0;
}
