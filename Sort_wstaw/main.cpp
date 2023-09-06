#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
const int N=10;

void Sort(int A[]){
    int i,j;
    for (i=2;i<=N;i++){
    	A[0]=A[i];
		j=i-1;
    	while (A[j]>A[0]){
			A[j+1]=A[j];
			j--;
		
		}
        A[j+1]=A[0];  
    }
}

void Los(int A[]){
	for (int i=1;i<N+1;i++) {
		A[i]=rand()%20;}}

void Wyp(int A[]){
	for (int i=1;i<N+1;i++) cout << A[i] << " ";
}


int main(int argc, char** argv)
{
    int A[N+1];
    srand(time(NULL));
    Los(A); Wyp(A); cout << endl;Sort(A); Wyp(A);
    return 0;
}


