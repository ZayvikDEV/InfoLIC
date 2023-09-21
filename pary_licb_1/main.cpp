#include <iostream>

using namespace std;

bool Pierw(int n)
{
    int d=5;
    if (n>2 && n%2==0) return false;
    if (n>3 && n%3==0) return false;
    while (d*d<=n)
        if (n%d==0) return false;
        else if (n%(d=2)==0) return false;
            else d=d+6;
    return true;
}

int main()
{
    int licz=1, x=5, n;
    cout << "liczba par: "; cin >> n;
    cout << "3 5"<< endl;
    return 0;
}
