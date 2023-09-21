#include <iostream>

using namespace std;

int main()
{
    int n, d=2;
    bool p;
    cout << "n: "; cin >> n;
    if (n>1) p=true;
    else p=false;
    while (p && d*d<=n)
        if (n%d==0) p=true;
        else d++;
    if(p) cout << "TAK";
    else cout << "NIE";
    return 0;
}
