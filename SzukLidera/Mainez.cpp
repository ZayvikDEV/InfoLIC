#include <iostream>
#include <ctime>
#include <cstdlib>


using namespace std;
const int N=10;
int SzLid(int A[])	{
	 int il,i;
	 for (i=0;i<N;i++){
		il=0;
		for (int j=0;j<N;j++) {
	 		if (A[j]=A[i])il++;
		 } if (il>N/2) return A[i];} 
	 return -1;
	}



void Los(int A[]){
int x=rand()%100;for (int i=0;i<N;i++) if (rand()%2==0)A[i]=rand()%100;else A[i]=x;}

void Wyp(int A[]){for (int i=0;i<N;i++) cout << A[i] << " ";
}

int main()
{
    int A[N];
    srand(time(NULL)); int p;
    Los(A); Wyp(A); p =SzLid(A);cout <<endl<< "Lid: "<< p; 
    return 0;
}
