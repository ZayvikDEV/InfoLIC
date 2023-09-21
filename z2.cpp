#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
const int N = 200;
void SitoEra(bool Pir[]){
	Pir[2]=true;
	for (int i=3;i<=N;i++)
	Pir [i]=(i%2==1);
	int d=3;
	while (d*d<N){
		for (int i=d;i*d<N;i+=2) 
		Pir[i*d]=false;
		do d+=2; while (!Pir[d]);
	}
	
}

void Wyp(bool A[]){
	for (int i=1;i<N+1;i++) if (A[i]) cout << i << " ";
}


int main()
{
    bool A[N];
    SitoEra(A); Wyp(A);
    return 0;
}
