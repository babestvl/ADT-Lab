#include<iostream>
#include<string>
#include <sstream>

using namespace std;
int main() {
    int t = 0;
    cin >> t;
    for (int i = 0 ; i < t; i++) {
        int n = 0;
        cin >> n;
        int caled = (((((n*567)/9)+7492)*235)/47)-498;
        stringstream ss;
        ss << caled;
        string s = ss.str();
        cout << s[s.length() - 2] << endl;
    }

    return 0;
}
