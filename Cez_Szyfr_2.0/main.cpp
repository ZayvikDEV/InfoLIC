#include <iostream>
#include <string>
using namespace std;

string Szyf(string tjaw, int kl)
{
    string szyfr="";
    int i=0, kod;
    for (i=0;i<tjaw.size();i++){
        if (toupper(tjaw[i])>='A'&& toupper(tjaw[i])<='Z') {
            kod =tjaw[i]+kl;
            if ((tjaw[i]<='Z'&& kod>'Z') || (tjaw[i]>='a'&& kod>'z')){
                    kod=kod-26;}

        szyfr=szyfr+char(kod);
    }
    else szyfr=szyfr+tjaw[i];}

    return szyfr;
}

int main()
{
    string tjaw;
    int kl;
    cout << "Tekst jawny:" ; getline(cin,tjaw);
    cout << "Klucz:" ; cin >> kl;
    cout << "Szyfrogram: " << Szyf(tjaw,kl);
    return 0;
}
