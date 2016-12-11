#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    while(n--) {
        int x;
        cin >> x;
        int L[50], ans = 0;
        for(int i = 0; i < x; i++) {
            cin >> L[i];
        }
        for(int i = 0; i < x; i++) {
            for (int j = 0; j < x - i - 1; j++) {
                if (L[j] > L[j+1]) {
                    int temp = 0;
                    temp = L[j];
                    L[j] = L[j+1];
                    L[j+1] = temp;
                    ans++;
                }
            }
        }
        cout << "Optimal train swapping takes " << ans << " swaps." << endl;
    }
    return 0;
}