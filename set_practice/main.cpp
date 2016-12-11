#include <iostream>
#include <set>
#include <stdlib.h>

using namespace std;

int main() {
    set<int> s;
    int n,m,x;
    cin >> n >> m;
    for (int i =0; i < n; i++) {
        cin >> x;
        s.insert(x);
    }

    for (int i = 0; i < m; i++) {
        cin >> x;
        int ans = 0;
        set<int>::iterator lower = s.lower_bound(x);
        if (*lower > x) {
            lower--;
        }
        set<int>::iterator upper = s.upper_bound(x);
        if (abs(*lower - x) <= abs(*upper - x)) {
            if (lower == s.end()) {
                lower--;
            }
            ans = *lower;
        } else {
            if (upper == s.end()) {
                upper--;
            }
            ans = *upper;
        }
        cout << ans << endl;
    }
    return 0;
}