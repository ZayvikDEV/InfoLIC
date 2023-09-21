#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

void SitoEra(bool Pir[], int a, int b){
	Pir[2]=true;
	for (int i=a;i<b;i++)
	Pir [i]=(i%2==1);
	int d=3;
	while (d*d<b){
		for (int i=d;i*d<b;i+=2) 
		Pir[i*d]=false;
		do d+=2; while (!Pir[d]);
	}
	
}

void Wyp(bool A[], int b){
	for (int i=1;i<b+1;i++) if (A[i]) cout << i << " ";
}


int main()
{
    int a,b; cin >> a; cout<< endl; cin >>b;bool A[b];
    SitoEra(A,a,b); Wyp(A, b);
    return 0;
}
