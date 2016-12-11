#include <iostream>
#include <set>
#include <cmath>
using namespace std;

main()
{
    int n =0 , c = 0, arr[100];
    cin >> n;
    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            int ca = 0;
            for(int j = 2; j <= i; j++) {
                if(i % j == 0) {
                    ca++;
                }
            }
            if (ca == 1) {
                c++;
            }
        }
    }
    cout << c;
}
