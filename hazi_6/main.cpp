#include <iostream>

using namespace std;

bool prim(int n)
{
    for(int oszto=2; oszto<n/2+1; oszto++)
    {
        if(n%oszto==0)
            return false;
    }
    return true;
}

void primek(int n, int &x, int &y)
{
    int sz=0;
    for(int oszto=n-1; oszto>=4; oszto--)
    {
        if(prim(oszto))
        {
            sz++;
            if(sz==1)
            {
                y=oszto;
            }
            else if(sz==2)
            {
                x=oszto;
                break;
            }
        }
    }
}

int main()
{
    int n;
    int x;
    int y;
    cout << "n=";
    cin >> n;
    primek(n, x, y);
    cout << "x=" << x << endl;
    cout << "y="<< y << endl;

    return 0;
}
