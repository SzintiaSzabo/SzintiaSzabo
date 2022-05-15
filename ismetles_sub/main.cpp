#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("def.in");
    while(in>>x){
        if(sub(x%1000)==sub(x/1000)){
            if(x>99999 && x<1000000){
                if(x>max1){
                    max2=max1;
                    max1=x;
                }else if(x>max2 && x !=max1){
                max2=x;
                }
            }
        }
    }
    if(max2>0){
        cout<< max1 <<" "<< max2 << endl;
    }else {
    cout<< "nincs"<<endl;
    }
    return 0;
}
