#include <iostream>

using namespace std;

void hanoi(int k, char elso, char utolso, char kozep){
if(k==0){
    return ;

}
 hanoi(k-1, elso, kozep, utolso);
cout << k << "." << elso << " -> " << utolso << endl;
hanoi(k-1, kozep, utolso, elso);
}

int main()
{
    int k;
    cout << "k=";
    cin >> k;
     hanoi(k, 'A', 'C', 'B');
    return 0;
}
