#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
const int N=5;

void Wyp(int A[][N]){ for(int i=0;i<N;i++){
	for (int j=0;j<N;j++) {if (A[i][j]>A[i][j+1]) swap(A[i][j],A[i][j+1]);
	
    cout<<A[i][j]<<" ";
	} 
        
	 cout<<endl;
}
}

int main()
{
 
	int A[N][N]; 
    srand(time(NULL)); 
    
    int i,j;
	for (i=0;i<N;i++) 
	for (j=0;j<N;j++) {
		A[i][j]=rand()%N;
	}
	Wyp(A);cout <<endl;
    return 0;
}
