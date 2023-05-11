#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n,x,a[100];
    bool prog = false,exist=false;
    ifstream in("atestat.in");
    ofstream out("atestat.out");
    while(in>>x)
    {
        n=0;
        int temp=x;
        while(x!=0)
        {

            a[n]=x%10;
            n++;
            x=x/10;
        }
        for(int i=1;i<=n;i++)
            if(a[i]%2!=0){
                prog=false;
                break;
            }else{
                prog=true;
            }
        if(prog) out<<temp;
        else exist = true;
    }

    if(!exist){
        out << "nem letezik";
    }
    in.close();
    out.close();

    return 0;
}
