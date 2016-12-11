#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> set;
    int n,m,x;
    while (cin >> n >> m && n||m) {
        set.clear();
        int ans = 0;
        while (n--) {
            cin >> x;
            set.insert(x);
        }
        while (m--) {
            cin >> x;
            if (set.find(x) != set.end()) {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}