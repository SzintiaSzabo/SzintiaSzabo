#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("bac.txt");
    int prev,next,hossz=0,maxhossz=0,cmaxhossz=0;
    in>>prev;
    while(in>>next){
        if(next==prev){
            hossz++;
        }else{
        if(prev==hossz){
            maxhossz+=hossz;
        }else{
        if(maxhossz>cmaxhossz){
            cmaxhossz=maxhossz;
        }
        maxhossz=0;
        }
        hossz=1;

        }
        prev=next;
    }
    cout<<cmaxhossz;
    return 0;
}
