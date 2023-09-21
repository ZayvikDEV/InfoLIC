#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;


void Zlicz(string s, int il[]){
	for (int i=0;i<26;i++) il[i]=0;
	for (int i=0;i<s.size();i++) il[s[i]-'A']++;

}



bool Anag(string s1, string s2, string s3){
 int il1[26],il2[26], il3[26];
 if ((s1.size()!=s2.size())||(s3.size()!=s2.size())) return false;
 Zlicz(s1,il1); Zlicz(s2,il2);Zlicz(s3,il3);
 for (int i=0;i<26;i++) {if ((il1[i]!=il2[i])||(il3[i]!=il2[i])) return false;
 }
 return true;
 }






int main()
{
    string s1, s2, s3;bool p;
    cin >> s1;cin >> s2;cin >> s3; cout << endl;
    p =Anag(s1,s2,s3);
    if (p) cout << "Anagram"; else cout << "Nie anagram";
    return 0;
}

