#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main () {
    string s;
    char a = 'A';
    char d = 'D';
    char g = 'G';
    char j = 'J';
    char m = 'M';
    char p = 'P';
    char t = 'T';
    char w = 'W';

    while (cin >> s) {
    string ans = "";
        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= a && s[i] < a+3) {
                ans.append("2");
            } else if (s[i] >= d && s[i] < d+3) {
                ans.append("3");
            } else if (s[i] >= g && s[i] < g+3) {
                ans.append("4");
            } else if (s[i] >= j && s[i] < j+3) {
                ans.append("5");
            } else if (s[i] >= m && s[i] < m+3) {
                ans.append("6");
            } else if (s[i] >= p && s[i] < p+4) {
                ans.append("7");
            } else if (s[i] >= t && s[i] < t+3) {
                ans.append("8");
            } else if (s[i] >= w && s[i] < w+4) {
                ans.append("9");
            } else if (s[i] == '-') {
                ans.append("-");
            } else {
                stringstream ss;
                ss << s[i];
                ans.append(ss.str());
            }


        }
        cout << ans << endl;
    }
    return 0;
}
