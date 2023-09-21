#include <iostream>

using namespace std;

int main()
{
    int a,b,i;
    cout << "Podaj pocz. przedzialu:" << endl;
    cin >> a;
    cout << "Podaj koniec przedzialu:" << endl;
    cin >> b;
    cout << " " << endl;
    for(i;a<=b;a++)
    {
        if (a%2==0)
            cout << a << "      ";
    }
    return 0;
}
