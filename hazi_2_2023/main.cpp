#include <iostream>

using namespace std;

int main()
{
    int a[100],i,n,k,szam,S=0;
    cout<<"n=";
    cin>>n;
    cout<<"k=";
    cin>>k;

    for(i=1;i<=n;i++){
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
    for(i=1;i<=n;i++){
        szam=0;
        while(a[i]!=0){
            a[i]=a[i]/10;
            szam++;
        }
        if(szam>k){
            S++;
        }
    }
    cout<<"k-nal nagyobb szamjegyu szamok= "<<S;
    return 0;
}
