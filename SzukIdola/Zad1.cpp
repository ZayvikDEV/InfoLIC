#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
const int N=5;

void Wyp(int A[][N]){ for(int i=0;i<N;i++){
	for (int j=0;j<N;j++)  cout<<A[i][j]<<" ";
	 cout<<endl;
}
}

int main()
{
 
	int A[N][N]; 
    srand(time(NULL)); 
    
    int i,j,max=0;
	for (i=0;i<N;i++) 
	for (j=0;j<N;j++) {
		A[i][j]=rand()%N;
		if (A[i][j]>max) max=A[i][j];
	}
	Wyp(A);cout <<endl<< "Max: "<< max;
    return 0;
}
