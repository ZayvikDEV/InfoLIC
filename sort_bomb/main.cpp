#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
const int N=10;
void Sort(int A[]){
    int i,j;
    for (i=1;i<N;i++){
        if (A[j]>A[j+1]) swap(A[j],A[j+1]);
    }
}

void Los(int A[]){
A[0]=rand()%20;
for (int i=1;i<N;i++) {A[i]=A[i-1]+rand()%20;}}

void Wyp(int A[]){for (int i=0;i<N;i++) cout << A[i] << " ";
}


int main()
{
    int A[N];
    srand(time(NULL));
    Los(A); Wyp(A); Sort(A); Wyp(A);
    return 0;
}
