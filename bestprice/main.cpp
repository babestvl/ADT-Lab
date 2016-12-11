#include <iostream>

using namespace std;
int main() {
    int w,l,a;
    cin >> w >> l >> a;
    int area[w][l];
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < l; j++) {
            cin >> area[i][j];
        }
    }
    int cheapest = -1;
    for (int i = w; i >=1; i--) {
        for (int j = 1; j <= l; j++) {
            if (i*j >= a) {
                for (int a = 0; a < w - i + 1; a++) {
                    for (int b = 0; b < l - j + 1; b++) {
                        int price = 0;
                        for (int x = 0; x < i; x++) {
                            for (int y = 0; y < j; y++) {
                                price += area[a+x][b+y];
                            }
                        }
                        if (cheapest == -1 || price < cheapest) {
                            cheapest = price;
                        }
                    }
                }
                break;
            }
        }

    }
    cout << cheapest << endl;
    return 0;
}