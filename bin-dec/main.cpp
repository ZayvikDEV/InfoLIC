#include <iostream>
#include <string>


using namespace std;

int main()
{
    int i, d=0,pot=1;
    string b;
    cout << "Podaj liczbe binarna: "; cin>>b;
    for(i=b.size()-1;i>=0;i--)
    {
        if (b[i]=='1') d=d+pot;
        pot=pot*2;
        d=d/2;
    }
    cout << "Liczba diesietna: "<<d;    return 0;
}
