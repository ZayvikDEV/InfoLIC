#include <iostream>

using namespace std;

int NWD(int a,int b){
    while (a*b!=0){
        if (a>b) a=a%b;
        else b=b%a;
    }
    return a+b;
}

int NWD2(int a,int b){
    int pom;
    while(b!=0){
        pom=b;
        b=a%b;
        a=pom;
    }
    return a;
}

int main()
{
    int a, b;
    cout << "Wpisz liczbe a:" << endl; cin >> a;
    cout << "Wpisz liczbe b:" << endl; cin >> b;
    cout << endl;
    cout << "Nwd= "<<NWD2(a,b);
    return 0;
}
