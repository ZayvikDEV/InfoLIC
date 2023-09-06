#include <iostream>

using namespace std;

int main()
{
        int i=0, prz=0, suma, pod, cy1, cy2;
    string a,b, c="";
    cout << "Liczba 1: "; cin >> a;
    cout << "Liczba 2: "; cin >> b;
    cout << "Podstawa: "; cin >> pod;
    while (a.size()<b.size()) a='0'+a;
    while (b.size()<a.size()) b='0'+b;
    for (i=a.size()-1;i>=0;i--) {

        if (a[i]<='9') cy1=a[i]-'0';
        else cy1=a[i]-'A'+10;
        if (b[i]<='9') cy2=b[i]-'0';
        else cy2=b[i]-'A'+10;

        suma = prz+cy1+cy2;
        prz=suma/pod;
        suma = suma%pod;
        if (suma<10) c=char(suma+'0')+c;
        else c=char(suma+'A'-10)+c;
    }
    if (prz>0)
        if (prz<10) c=char(prz+'0')+c;
        else c=char(suma+'A'-10)+c;
    cout<<"Suma = "<<c;
    return 0;
}
