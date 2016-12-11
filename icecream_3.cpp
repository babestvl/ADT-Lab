#include <iostream>
#include <cmath>
using namespace std;

main()
{
    int m = 0;
    int in = 0;
    int id[100000];
    int age[100000];
    int total = 0;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int input = 0;
        cin >> input;
        if (input == 1) {
            int n = 0;
            cin >> n;

            for (int j = total; j < total + n; j++) {
                cin >> id[j];
                cin >> age[j];
            }
            total += n;
        }
        else if (input == 2) {
            int index = 0;
            for (int k = 0; k < total; k++) {
                if (age[k] < age[index]) {
                    index = k;
                }
            }
            cout << id[index] << endl;
            for (int c = index; c < total; c++) {
                id[c] = id[c+1];
                age[c] = age[c+1];
            }
            total--;
        }

    }
}


