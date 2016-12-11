#include <iostream>
#include <list>
#include <string>

using namespace std;
 
int main () {
    string s;
    while ( cin >> s ) {
        int length = s.length();
        list <char> ans;
        list <char>::iterator iter = ans.begin();

        for ( int i = 0; i < length; i++ ) {
            if ( s[i] == '[' ) {
                iter = ans.begin();
            } else if ( s[i] == ']' ) {
                iter = ans.end();
            } else {
                ans.insert(iter, s[i]);
            }
        }
        for ( iter = ans.begin(); iter != ans.end(); iter++ ) {
            cout << *iter;
        }
        cout << endl;
    }
    return 0;
}