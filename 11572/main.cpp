#include <iostream>
#include <map>

using namespace std;

int id[100000000];

int main() {

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        map<int, int> m;
        int ans = 0, p = 1;
        for (int i = 1; i <= n; i++) {
            cin >> id[i];
            if (m[id[i]] >= p) {
                p = m[id[i]] + 1;
            }
            m[id[i]] = i;
            int c = (i - p + 1);
            if(c > ans) {
                ans = c;
            }
        }
        cout << ans << endl;
    }
    return 0;
}