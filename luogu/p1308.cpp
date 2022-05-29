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
    //因为连起来的不算，所以要在前后加几个空格，一定要是同样多的，同量减同量，等于同量
    word = ' ' + word + ' ';
    s = ' ' + s + ' ';

    //先看看会不会找不到，用a.find()和string::npos
    if (s.find(word) == -1)
        cout << -1 << endl;

    //如果找得到
    else {
        int fi = s.find(word);
        int ne = s.find(word), cnt = 0;
        //find找不到会返回npos也就是-1 
        while (ne != -1) {
            cnt++;
            ne = s.find(word, ne + 1);
        }
        cout << cnt << " " << fi << endl;
    }
    return 0;
}
