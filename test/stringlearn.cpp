#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = " I'm";
    string t = " a";
    s.insert(4, t);
    //int p = s.find(t, 0);
    cout << s << endl;

    int num = 100;
    
    //or str<< num;
    string str = to_string(num);
    cout << str << endl;
    //or str >> num_1;
    int num_1 = stoi(str);

    cout << num_1 << endl;


    return 0;
}