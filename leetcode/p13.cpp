#include <bits/stdc++.h>
using namespace std;

int romanToInt(string s);
int main() {


    return 0;
}

int romanToInt(string s) {
    int res = 0;
    map<char, int> rToI = {
               {'I',1} ,
               {'V', 5},
               {'X', 10},
               {'L', 50},
               {'C', 100},
               {'D', 500},
               {'M', 1000} };
    for (int i = 0;i < s.length();i++) {
        if (rToI[s[i]] < rToI[s[i + 1]])
            res -= rToI[s[i]];
        else
            res += rToI[s[i]];
    }

    return res;

}