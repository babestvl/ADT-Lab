#include <iostream>
#include <cmath>
using namespace std;

main()
{
    int m = 0;
    int in = 0;
    int out = 0;
    int flavor[20];
    for (int i = 0; i < 20; i++) {
        flavor[i] = 0;
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        int input = 0;
        cin >> input;
        int arr[100000];
        int id[100000];

        if (input == 1) {
            int n = 0;
            cin >> n;
            for (int j = 0; j < n; j++) {
                cin >> arr[in];
                cin >> id[in];
                 in++;
            }
        }
        if (input == 2) {
            cout << arr[out] << endl;
            flavor[id[out]-1] += 1;
            out++;
        }
    }
    cout << in - out << endl;
    for (int i = 0; i < 20; i++) {
        cout << flavor[i] << " ";
    }


}

