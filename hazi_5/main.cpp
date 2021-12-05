#include <iostream>
#include <cmath>

using namespace std;

bool prim(int val){
  int i = 2;
  while (i <= sqrt(val)){
    if (val % i == 0){
        return false;
    }
     i++;
  }
  return true;
}
  int kov_prim(int n){
   do {
    if (n == 2){
        n++;
    } else {
        n += 2;
    }
   }
   while (prim(n) == false);
    return n;
  }

   int hatvany(int n){
    int d = 2;
    int min_prim = 110 ;
    int min_hatvany = 10 ;

    while (n != 1){
     int osztasok_szama = 0;
     while (n % d == 0){
        osztasok_szama++;
        n = n/d;
     }
     if ( osztasok_szama && osztasok_szama < min_hatvany){
        min_prim = d;
        min_hatvany = osztasok_szama;
     }
    d = kov_prim(d);
}
 return min_prim;
}
 int main(){
  int szam;
  cout << "szam = ";
  cin >> szam;
  cout << "megoldas = " << hatvany(szam);

  return 0;
 }
