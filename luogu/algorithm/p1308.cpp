#include <bits/stdc++.h>
using namespace std;
int main() {
    string s, word;
    getline(cin, word);
    getline(cin, s);
    for (int i = 0; i < word.length(); i++)
        word[i] = tolower(word[i]);
    for (int i = 0; i < s.length(); i++)
        s[i] = tolower(s[i]);
    word = ' ' + word + ' ';
    s = ' ' + s + ' ';
    if (s.find(word) == -1)
        cout << -1 << endl;
    else {
        int fi = s.find(word);
        int ne = s.find(word), cnt = 0;
        while(ne !=-1){
            cnt++;
            ne = s.find(word, ne + 1);
        }
        cout << cnt << " " << fi << endl;
    }
    return 0;
}
