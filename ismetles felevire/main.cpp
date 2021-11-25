#include <iostream>

using namespace std;

	bool prim(int a){
	 for (int i=2;i<a/2+1;i++){
		if(a%i==0){
		 return false;
		}
	 }
  return true;
	}
	bool pallindrom(int a){
	int d=0, x=a;
	while(x>0){
		int c=x%10;
		x=x/10;
		d=d*10+c;
	}

  //return a==d;
  if(a==d){
		return true;
  }else {
  	return false;
  }
	}

	int lnko (int a, int b){
  while(a!=b){
		if(a>b){
			a=a-b;
		}else {
		  b=b-a;
		}
	}
	return a;
	}

	int main()
{
	int a;

	while(a>0){

		cout << "Mit szeretnel csinalni?" << endl;
		cout << "1.Megvizsgalni, hogy egy szam prim-e" << endl;
		cout << "2.Megvizsgalni, hogy egy szam pallindrom-e" << endl;
		cout << "3.Megkeresni ket szam legnagyobb kozos osztojat" << endl;
		cout << "0.Kilepni" << endl;
		cin >> a;
		if(a==1){
      int x;
      cout << "a szam";
      cin >> x;
      if(prim(x)){
				cout << "a szam prim" << endl;
      }else {
      cout << "a szam nem prim" << endl;
      }
		}
		 if(a==2){
			int x;
			cout << "a szam";
			cin >> x;
      if (pallindrom(x)){
				cout << "a szam pallindrom" << endl;
      }else {
      cout << "a szam nem pallindrom" << endl;
      }
		 }
		 if (a==3){
			int x, y;
			cout << "elso szam";
			cin >> x;
			cout << "masodik szam";
			cin >> y;
			cout << lnko(x, y);
	}
	}

    return 0;


}
