#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
const int N=20;

//void Sort(int A[]){
//    int i,j;
//    for (i=2;i<=N;i++){
//    	A[0]=A[i];
//		j=i-1;
//    	while (A[j]<A[0]){
//			A[j+1]=A[j];
//			j--;
//		
//		}
//        A[j+1]=A[0];  
//    }
//}
void Sort(int A[]){
    int i,j,m,p;
    for (i=N;i>=2;i--){
    	m=i;
    	for (j=i-1;j>=0;j--){
		if (A[j]<A[m]) m=j;}
    		p=A[i];A[i]=A[m];A[m]=p;
		
		
        
    }
}

void Los(int A[]){
for (int i=0;i<=N;i++) {A[i]=rand()%90;}}

void Wyp1(int A[]){for (int i=0;i<N;i++) cout << A[i] << ", ";
}
void Wyp2(int A[]){for (int i=0;i<N;i++) if (A[i]%2==0)cout << A[i] << ", ";
}

int main(int argc, char** argv)
{
    int Wiktoria[N];
    srand(time(NULL));
    Los(Wiktoria); Wyp1(Wiktoria); cout << endl;Sort(Wiktoria); Wyp2(Wiktoria);
    return 0;
}

