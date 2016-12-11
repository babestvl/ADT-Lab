#include <iostream>
#include <set>
#include <cmath>
using namespace std;

main()
{
    int a = 0, b = 0, temp = 0;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        temp += i;
    }
    cout << temp;

}
