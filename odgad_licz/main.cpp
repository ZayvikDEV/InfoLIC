#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

const int N=10;

bool Szuk(int A[],int x){
 int l=0,p=N-1,sr;
 while (l<p){
    sr=(l+p)/2;
    if (A[sr]<x) l=sr+1;
    else p=sr;
 } return (A[l]==x);
}

void Los(int A[]){
A[0]=rand()%20; for (int i=1;i<N;i++) A[i]=A[i-1]+rand()%20;}

void Wyp(int A[]){for (int i=0;i<N;i++) cout << A[i] << " ";
}

int main()
{
    int A[N];
    int x;
    srand(time(NULL));
    Los(A); Wyp(A);
    cout << "Pod x: "; cin>>x;cout << endl;
    if (Szuk(A,x))
        cout<<"x jest";
    else
        cout<<"x niema";
    return 0;
}
