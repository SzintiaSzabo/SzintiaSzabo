#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int a= -1;
    ifstream myfile("input.txt");
    myfile >>a;
    cout <<a;
    myfile.close();
    return 0;
}
