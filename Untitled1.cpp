#include<iostream>
#include<vector>
#include<fstream>
using namespace std;

struct kr {
    int w2;
    int wg;
};

typedef vector<vector<kr> > tgraf;

void Cz(tgraf &Gr){
    int n, m, w1;
    kr kraw;
    ifstream we("test.txt");
    we >> n >> m;
    Gr.resize(n);
    for (int i=0; i<m; i++){
        we >> w1 >> kraw.w2 >> kraw.wg;
        Gr[w1].push_back(kraw);
    }
    we.close();
}

void Dij(tgraf &Gr, int pocz, vector<int> &Ksz){
    kr kraw;
    int i, j, k, w1;
    vector<bool> Odw;
    Odw.resize(Gr.size(), false);
    Ksz[pocz] = 0;
    for (i=0; i<Gr.size()-1; i++){
        k = pocz;
        while (Odw[k]) k++;
        w1 = k;
        for (j=k+1; j<Gr.size(); j++){
            if (!Odw[j] && Ksz[j]<Ksz[w1] + kraw.wg) w1 = j;
        }
        Odw[w1] = true;
        for (j=0; j<Gr[w1].size(); j++){
            kraw = Gr[w1][j];
            if (!Odw[kraw.w2] && (Ksz[w1]+kraw.wg)< Ksz[kraw.w2])
                Ksz[kraw.w2] = Ksz[w1] + kraw.wg;

        }
    }
}

int main(){
    tgraf Gr;
    Cz(Gr);
    vector<int> Ksz;
    Ksz.resize(Gr.size(), 1000);
    int pocz;
    cout <<"Num wierz pocz: ";
    cin>>pocz;
    Dij(Gr, pocz, Ksz);
    cout<<"Koszt dojscia z wierz "<<pocz<<" do wierz: "<<endl;
    for (int i=0; i<Gr.size(); i++){
        if (i!=pocz){
            cout<<i<<": "<<Ksz[i]<<endl;
        }
    }
    return 0;
}
