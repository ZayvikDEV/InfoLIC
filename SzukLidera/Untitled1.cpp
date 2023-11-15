#include <iostream>
#include <ctime>
#include <cstdlib>


using namespace std;
const int N=10;
int SzLid(int A[])	{
	int i, kan, il=0;
	for (i=0;i<N;i++) if (il==0){
		il=1; kan=A[i];
	} else if (A[i]==kan)il++; else il--;
	if (il==0) return -1;
	il=0;
	for (i=0;i<N;i++) if (A[i]==kan)il++; if (il>N/2) return kan;
	else return -1;
	}



void Los(int A[]){
int x=rand()%100;for (int i=0;i<N;i++) if (rand()%2==0)A[i]=rand()%100;else A[i]=x;}

void Wyp(int A[]){for (int i=0;i<N;i++) cout << A[i] << " ";
}

int main()
{
    int A[N]; int lid;
    srand(time(NULL)); 
    Los(A); Wyp(A); lid =SzLid(A);if (lid!=-1)cout <<endl<< "Lid: "<< lid; else cout <<endl<< "Lid: none";
    return 0;
}
