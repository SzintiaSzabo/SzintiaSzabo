#include <iostream>
#include <string>

using namespace std;

int main()
{
   string str;
   cout << "Kerem a szoveget";
   cin >> str;
   getline (cin, str);
   int pos = 0, nr = 1;
   while(str.find(" ", pos)!=string::npos){
		nr++;
		pos = str.find(" ",pos+1);
   }

    cout << nr;

    return 0;
}
