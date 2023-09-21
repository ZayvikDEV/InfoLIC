#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;


void Sort(string &s){
    int i,j,m; char p;
    for (i=0;i<s.size();i++){
    	m=i;
    	for (j=i+1;j<s.size();j++){
		if (s[j]<s[m]) m=j;
    		p=s[i];s[i]=s[m];s[m]=p;
		
		}
        
    }
}

bool Anag(string s1, string s2){
 if (s1.size()!=s2.size()) return false;
 Sort(s1); Sort(s2);
 return (s1==s2);
 }



int main(int argc, char** argv)
{
    string s1, s2;
    cin >> s1;cin >> s2; cout << endl;
    if (Anag(s1,s2)==1) cout << "Anagram"; else cout << "Nie anagram";
    return 0;
}


