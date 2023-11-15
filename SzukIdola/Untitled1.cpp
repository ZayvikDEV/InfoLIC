#include <iostream>
#include <ctime>
#include <cstdlib>


using namespace std;
const int N=5;
int SzId(bool A[][N])	{
	int i;int kand=0; bool jkand=false;
	while(kand<N && !jkand){
		i=0; A[kand][kand]=false;
		while(i<N && !A[kand][i])i++;
		if (i==N) jkand=true;
		else kand++;
	} if (!jkand) return -1;
	i=0; A[kand][kand]=true;
	while (i<N && A[i][kand]) i++;
	if (i==N) return kand;
	else return -1;
	}



void Los(bool A[][N]){
	int i,j,id;
	for (i=0;i<N;i++) 
	for (j=0;j<N;j++) A[i][j]=rand()%2;
	if (rand()%2==1){
		id =rand()%N;
		for(i=0;i<N;i++) A[i][id]=true;
		for(j=0;j<N;j++) A[id][j]=false;
	}
}

void Wyp(bool A[][N]){ for(int i=0;i<N;i++){
	for (int j=0;j<N;j++) if (i!=j) cout<<A[i][j]<<" ";
	else cout<<"  "; cout<<endl;
}
}

int main()
{
    bool A[N][N]; int id;
    srand(time(NULL)); 
    Los(A); Wyp(A); id =SzId(A);if (id!=-1)cout <<endl<< "Idol: "<< id+1; else cout <<endl<< "Idol: none";
    return 0;
}
