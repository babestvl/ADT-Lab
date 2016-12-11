#include <iostream>

using namespace std;

int main() {
    int w,h,n,x1,x2,y1,y2;

    int arr[500][500];

    while (cin >>w >> h >> n && w != 0) {
        for (int i = 0; i < 500; i++) {
            for (int j = 0; j < 500; j++) {
                arr[i][j] = -1;
            }
        }

        for (int i = 0; i < n; i++) {
            cin >> x1 >> y1 >> x2 >> y2;
            if (x1 > x2) {
                int temp = x1;
                x1 = x2;
                x2 = temp;
            }

            if (y1 > y2) {
                int temp = y1;
                y1 = y2;
                y2 = temp;
            }

            for (int j = x1; j <= x2; j++) {
                for (int k = y1; k <= y2; k++) {
                    arr[j][k] = 0;
                }
            }
        }
        int check = 0;
        for (int i = 1; i <= w; i++) {
            for (int j = 1; j <= h; j++) {
                if (arr[i][j] == -1) {
                    check++;
                }
            }
        }
        if (check == 0)
            cout << "There is no empty spots." << endl;
        else if (check == 1)
            cout << "There is one empty spot." << endl;
        else
            cout << "There are " << check << " empty spots." << endl;

    }
    return 0;
}