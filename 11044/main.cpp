#include <iostream>
using namespace std;

int main() {
    int x, n, m;
    cin >> x;
    while(x--){
        cin >> n >> m;
        cout << ((n/3)*(m/3)) << endl;
    }

    return 0;
}