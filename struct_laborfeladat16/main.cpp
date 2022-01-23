#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

int main()
{
    struct diakok{
        string nev;
        string szemszin;
        double magyar;
        double roman;
        double matek;
        double fizika;
        int eletkor;

    } x[300];
    ifstream nev("nev.txt");
    ifstream szem("szemszin.txt");
    ifstream magyar("magyar.txt");
    ifstream roman("roman.txt");
    ifstream matek("matek.txt");
    ifstream fizika("fizika.txt");
    ifstream eletkor("eletkor.txt");

    int i=0;
    while(nev>>x[i].nev){
        i++;
    }
    for(int j=0; j<i; j++){
        szem>>x[j].szemszin;
        magyar>>x[j].magyar;
        roman>>x[j].roman;
        matek>>x[j].matek;
        fizika>>x[j].fizika;
        eletkor>>x[j].eletkor;
    }
    int atlag[123], max=0;
    for(int j=0; j<i; j++){
        if(x[j].szemszin=="barna"){
            atlag[j]=(x[j].magyar+x[j].roman+x[j].matek+x[j].fizika)/4;
        }
    }

    for(int j=0; j<i; j++){
        if(x[j].szemszin=="barna"){
            if(atlag[j]>max){
                max=atlag[j];
            }
        }

    }
    for(int j=0; j<i; j++){
        if(max==atlag[j]){
            cout<<"A legjobban tanulo barna szemu diak/diakok neve s fizika jegye:"<<x[j].nev<<";"<<x[j].fizika<<endl;
        }
    }
    int min=100;
    for(int j=0; j<i; j++){
    if(x[j].eletkor<min){
        min=x[j].eletkor;
    }
    }
    for(int j=0; j<i; j++){
        if(min==x[j].eletkor){
            cout<<"A legfiatalabb diak/diakok neve,szemszine s magyar jegye:"<<x[j].nev<<";"<<x[j].szemszin<<";"<<x[j].magyar<<endl;
        }
    }
    int maximum=0;
    for(int j=0; j<i; j++){
        if(x[j].magyar>maximum){
            maximum=x[j].magyar;
        }
    }
    for(int j=0; j<i; j++){
        if(maximum==x[j].magyar){
            cout<<"A legjobb magyaros diak/diakok eletkora s szemszine:"<<x[j].eletkor<<";"<<x[j].szemszin<<endl;
        }
    }


    return 0;
}
