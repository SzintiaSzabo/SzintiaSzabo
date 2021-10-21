#include <iostream>
#include <string>

using namespace std;

int main()
{
	  string str;
	  cout << "Kerem a szoveget";
	  getline (cin, str);
	  size_t found = str.find("m");
    while(found != string::npos){
			str.replace(found, 1, "mpm");
			cout << str << endl;
			found = str.find("m", found+3);
    }

    cout << str;
    return 0;
}
