#include <iostream>
#include <map>
#include <stdio.h>
using namespace std;

int main() {
    int n,k,m;
    cin >> n;

    while (n--) {
        cin >> k;
        double price = 0;
        map<char,int> map;
        for (int j = 0; j < k; j++) {
            char c;
            int val;
            cin >> c >> val;
            map[c] = val;
        }
        cin >> m;
        char article[10000];
        cin.getline(article,10000);
        for (int j = 0; j < m; j++) {
            cin.getline(article,10000);
            for (int x = 0; x < 10000 && article[x] != '\0'; x++) {
                if (map.find(article[x])!=map.end() )
                    price += map[article[x]];

            }
        }
        printf("%.2f$\n",price/100);
    }
    return 0;
}