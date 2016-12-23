#include <iostream>

using namespace std;
int main() {
    int n,l;
    cin >> n;
    pair<int,int> p[n];
    for (int i = 0; i < n; i++) {
        int k,m;
        cin >> k >> m;
        p[i] = make_pair(k,m);
    }
    cin >> l;
    for (int i = 0; i < l; i++) {
        int s,t,out = 100000000,x = -1;
        cin >> s >> t;
        for (int j = s-1; j < t; j++) {
            if (p[j].first != 0 && p[j].second < out) {
                out = p[j].second;
                x = j;
            }
        }
        if (out == 100000000) out = -1;
        cout << out << endl;
        if (x != -1) {
            p[x].first--;
        }
    }
    return 0;
}