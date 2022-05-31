#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string validIPAddress(string IP) {
        string int256 = "(\\d|[1-9]\\d|1\\d\\d|2[0-4]\\d|25[0-5])";
        string base16 = "([0-9a-fA-F]){1,4}";
        regex ipv4("(" + int256 + "\\.){3}" + int256);
        regex ipv6("(" + base16 + "\\:){7}" + base16);
        if (regex_match(IP.begin(), IP.end(), ipv4)) return "IPv4";
        if (regex_match(IP.begin(), IP.end(), ipv6)) return "IPv6";
        return "Neither";
    }
};
int main() {
    Solution s;
    char ip[60] = "1.1.0.00";
    string str = s.validIPAddress(ip);
    cout << str << endl;
    return 0;
}