#include <iostream>
#include <map>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
    int n = 0 ;
    vector<int> vector;
    map<int, int> map;

    while (scanf("%d", &n) != EOF) {
        if (map.count(n) == 0) {
            map[n] = 1;
            vector.push_back(n);
        } else
            map[n] = map[n] + 1;
    }

    for(int i = 0; i < vector.size(); i++){
        cout << vector[i] << " " << map[vector[i]] << endl;
    }

    return 0;
}