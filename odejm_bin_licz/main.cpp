#include <iostream>

using namespace std;

string PrzU2(string s) {
    int i;
    for (i=0;i<8;i++)
        if (s[i]=='0') s[i]='1';
        else s[i]='0';
    s='0'+s; i=8;
    while (s[i]=='1'){
       s[i]='0';
       i--;
    }
    s[i]='1';
    return s.substr(1,8);
}

string DodU2(string a, string b) {
    int i=0,p=0,suma,ost=0;
    string c="";
    for (i=7;i>=0;i--) {
    suma = p+a[i]-'0'+b[i]-'0';
    if (suma%2==1) c='1'+c;
    else c='0'+c;
    p=suma/2;
    if (i<=1) ost=ost+p;}
    if(ost==1)
        cout << "Wynik przekracza zakres" << endl;
    return c;
}

int main()
{
    string a,b, c="";
    cout << "Bin licz 1: "; cin >> a;
    cout << "Bin licz 2: "; cin >> b;
    while (a.size()<8) a='0'+a;
    while (b.size()<8) b='0'+b;
    b= PrzU2(b);
    c= DodU2(a,b);
    cout<<"Roznica = "<<c;
    return 0;
}
