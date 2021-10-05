#include <iostream>

using namespace std;

int main()
{
    int v[10] = {0, 2, 3, 4, 1, 6, 5, 7, 9, 8};
    int n = 10;
    for(int balindex=0; balindex< n-1; balindex++){
        for(int jobbindex=balindex+1;jobbindex<n;jobbindex++){
            if( v[balindex]> v[jobbindex]){
                swap( v[balindex], v[jobbindex]);
            }
        }
    }

    for(int i = 0; i<10; i++){
        cout << v[i] << " ";
    }
        return 0;
    }
