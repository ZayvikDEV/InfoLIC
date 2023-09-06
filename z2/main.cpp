#include <iostream>
#include <string>
#include <fstream>
using namespace std;

string Szyf(string tjaw)
{
    string szyfr="";
    int i=0;
    for (i=0;i<=tjaw.size();i++){
        if (i%2==0) { szyfr=szyfr+tjaw[i+1];

    } else szyfr=szyfr+tjaw[i-1];}

    return szyfr;
}

int main()
{
    ifstream wej("teksst2D.txt");
    ofstream wyj("odp.txt");
    string tjaw;
    while (!wej.eof())
    {
        getline(wej,tjaw);
        wyj << Szyf(tjaw)<< endl;
    }
    wej.close();
    wyj.close();
    cout << "Plik odp.txt zostal utworzony" ;
    return 0;
}
