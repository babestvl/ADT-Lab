#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string arr = "";
        cin >> arr;
        int value = 0;
        for (int j = 0; j < 8; j++) {
            if (j < 3) {
                value += (arr[j]-'A') * pow(26,2-j);
            }else if (j > 3) {
                value -= (arr[j]-'0') * pow(10,7-j);
            }

        }

        if (abs(value) <= 100) {
            cout << "nice" << endl;
        } else {
            cout << "not nice" << endl;
        }
    }


    return 0;
}
