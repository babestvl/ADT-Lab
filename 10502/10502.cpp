#include <iostream>

using namespace std;
int main() {
    int n, m;
    char map[101][101];
    while(cin >> n && n) {
        cin >> m;
        int ans = 0, length = 0, width = 0, tmp = 0;
        for(int i = 0; i < n; i++) {
            cin >> map[i];
        }
        for(int i = 0; i < n; i++) {
            int sum[101] = {};
            for(int j = i; j < n; j++) {
                for(int k = 0; k < m;  k++) {
                    sum[k] += map[j][k]-'0';
                    if(k == 0 || tmp != length*width) {
                        tmp = 0, length = 0;
                    }
                    tmp += sum[k];
                    length++, width = j-i+1;
                    if(tmp == length*width) {
                        ans += length;
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}