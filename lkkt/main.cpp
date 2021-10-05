#include <iostream>

using namespace std;

int main()
{
   int a,b,c;
   cout <<"a=";
   cin >>a;
   cout <<"b=";
   cin >>b;
   c=a*b;
   while (a!=b) {
     if (a>b) {
     a=a-b ;
    } else {
      b=b-a;
     }
     c=c/a;

   }
   cout << "lkkt "<<c;

    return 0;
}


