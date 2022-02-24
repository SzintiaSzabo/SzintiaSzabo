#include <iostream>
#include <vector>

using namespace std;

int N = 4;

string fruit[] = {"eper", "alma", "sargadinnye", "korte", "narancs"};

bool lehet(vector<string> koktel, string ujfruit)
{
    for(int i=0; i<koktel.size(); i++)
    {
        if(ujfruit == koktel[i])
        {
            return false;
        }
    }
    if(ujfruit == "narancs")
    {
        for(int i=0; i<koktel.size(); i++)
        {
            if(koktel[i] == "sargadinnye")
            {
                return false;
            }
        }
    }
    if(ujfruit == "sargadinnye")
    {
        for(int i=0; i<koktel.size(); i++)
        {
            if(koktel[i] == "narancs")
            {
                return false;
            }
        }
    }
    return true;
}
void kiir(vector<string> koktel)
{
    for(int i=0; i<koktel.size(); i++)
    {
        cout << koktel[i] << " ";
    }
    cout << endl;
    return;
}

void backtrack(vector<string> koktel)
{

    if(koktel.size() == N)
    {
        kiir(koktel);
        return;
    }
    for(int i=0; i<5; i++)
    {
        if(lehet(koktel,fruit[i]))
        {
            vector<string>tempkoktel;
            for(int j=0; j<koktel.size(); j++)
            {
                tempkoktel.push_back(koktel[j]);
            }
            tempkoktel.push_back(fruit[i]);
            backtrack(tempkoktel);
        }
    }
}
int main()
{
    vector<string>koktel;
    backtrack(koktel);
    return 0;
}
