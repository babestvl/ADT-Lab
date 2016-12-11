#include <iostream>
#include <string>;

using namespace std;
int main() {
    int n;
    int arr[10] = {};
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        int c,h = 0;
        cin >> s >> c;
        c -= 1;
        if (s == "-") {
            for (int j = c; j < c+4; j++) {
                if (arr[j] > h) {
                    h = arr[j];
                }
            }
            for (int k = c; k < c+4; k++) {
                    arr[k] = h+1;
            }
        } else if (s == "i") {
            arr[c] += 4;
        } else if (s == "o") {
            for (int j = c; j < c+2; j++) {
                if (arr[j] > h) {
                    h = arr[j];
                }
            }
            for (int k = c; k < c+2; k++) {
                arr[k] = h+2;
            }
        }
    }
    int out = arr[0];
    for (int i = 1; i < 10; i++) {
        if (arr[i] > out) {
            out = arr[i];
        }
    }
    cout << endl << out << endl;
    return 0;
}