#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char v[100],*p,egal[100]=" ",a[20];
    int j,k=0;
    cout<<"v=";
    cin.get(v,100);
    p=strtok(v," ");
    while(p!=NULL){
        if(strlen(p)%2!=0){
        k=1;
        j=0;
        strcpy(a," ");
        for(int i=strlen(p)-1;i>=0;i--){
            a[j]=p[i];
            j++;
        }
        a[j]=NULL;
        strcat(egal,a);
        }else{
        strcat(egal,p);
        strcat(egal," ");
        p=strtok(NULL," ");
        }
        if(k!=0){
            cout<<egal;
        }else{
        cout<<"nu exista";
        }
    }
    return 0;
}
