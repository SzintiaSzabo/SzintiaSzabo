#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
    string str1;
    cout << "str1=";
    cin >> str1;
    string str2 = "mpm";
    int i = 0;

    while (i < str1.length()){
        if (strchr("aeiouAEIOU", str1[i])){
            str1.replace(i, 1, str2);
            i = i + str2.length();
        }else{
            i = i + 1;
        }
    }

    i = 0;
    while (i < str1.length()){
        if (str1[i] == 'p'){
            str1.insert(i + 1, "Z");
            i = i + 2;
        }else{
            i = i + 1;
        }
    }
      cout << str1 << endl;

    return 0;
}
