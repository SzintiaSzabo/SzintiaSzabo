#include <iostream>
#include <fstream>

using namespace std;

int main()
{
   int v[100][100];
   int n,m;
   ifstream in("input.txt");
   in>>n;
   in>>m;
   bool isTrue=false;
   for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
          //  cout<< "v["<<i<<"]["<<i<<"]= ";
            in>>v[i][j];
        }

   }
   int x;
   cin>>x;
   for(int i=0;i<n;i++){
    if(v[i][m-1]==x){
        isTrue=true;
        break;
    }
   }
   for(int i=0;i<m;i++){
    if(v[n-1][i]==x){
        isTrue=true;
        break;
    }
   }
   for(int i=0;i<m;i++){
    if (v[1][i]==x){
        isTrue= true;
        break;
    }

   }
   if (isTrue){
    cout<< "Da";
   } else {
       cout<< "nu";
   }


    return 0;
}
