#include <iostream>
#include <string>

using namespace std;

int main()
{
		string str;
		cout << "Kerem a szot";
		cin >> str;
		int k;
	  cout << "k=";
		cin >> k;

		int n = str.size();
		while(k>0){
			char nevet = str[n-1];
        for(int i=n; i>0; i--){
			   str[i] = str[i-1];

		}
    str[0] = nevet;
    k = k-1;

		}


    cout << str;
    return 0;
}
