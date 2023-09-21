#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;


void Zlicz(string s, int il[]){
	for (int i=0;i<26;i++) il[i]=0;
	for (int i=0;i<s.size();i++) il[s[i]-'A']++;

}



bool Anag(string s1, string s2){
 int il1[26],il2[26];
 if (s1.size()!=s2.size()) return false;
 Zlicz(s1,il1); Zlicz(s2,il2);
 for (int i=0;i<26;i++) 
 if (il1[i]!=il2[i]) return false;
 return true;
 }






int main(int argc, char** argv)
{
    string s1, s2;
    cin >> s1;cin >> s2; cout << endl;
    if (Anag(s1,s2)==1) cout << "Anagram"; else cout << "Nie anagram";
    return 0;
}

