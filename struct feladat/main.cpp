#include <iostream>
#include <fstream>

using namespace std;

struct diak{
int azonosito;
double media;
string nev;
string osztaly;

}
diakok[1000];

int main()
{
	int min, idx;
	int n;
  ifstream input("input.txt");
  input >> n;
  for (int i=0; i<n; i++){
		input >> diakok[i].azonosito;
		input >> diakok[i].nev;
		input >> diakok[i].osztaly;
		input >> diakok[i].media;
		if(i==0){
			min = diakok[i].media;
		}
		if (diakok[i].media < min){
			min = diakok[i].media;
			idx = diakok[i].azonosito;
		}
  }
cout << idx << endl;
    return 0;
}
