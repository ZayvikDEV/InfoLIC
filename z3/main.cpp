#include <iostream>

using namespace std;

int main()
{
    int i=0,p,k,r=0;
    cout << "Pocz:" ; cin >> p;cout << "Kon:" ; cin >> k;
    int Licz[k-p];
    for (i=0;i<=k-p;i++){
        r=r + Licz[i];}
    cout << r <<endl;

    return 0;
}
