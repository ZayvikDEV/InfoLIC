#include <iostream>

using namespace std;

//struct wym{
//int li;
//int m;
//};

int NWD(int a,int b){
    int pom;
    while(b!=0){
        pom=b;
        b=a%b;
        a=pom;
    }
    return a;
}

int NWW(int a,int b){
    return (a*b)/NWD(a,b);
}

int main()
{
     int a, b;
    cout << "1 Licz: " ;cin>>a;
    cout << "2 Licz: " ;cin>>b;
    a = NWW(a,b);
    cout << a;
    return 0;
}
