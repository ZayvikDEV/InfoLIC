#include <iostream>

using namespace std;

int main()
{
    int i=0;
    string wyr="", res="";
    cout << "Slowo: "; cin >> wyr;
    for (i;i<wyr.size();i++){
        res = wyr[i] + res;
    }
    cout << endl << res;
    return 0;
}
