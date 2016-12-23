#include <iostream>
#include <set>
using namespace std;
int main() {
    int i,n,m,sol = 0;
    cin >> n >> m;
    set<pair<int,int> > s;
    for (i = 0; i < n;i++) {
        int x;
        cin >> x;
        s.insert(make_pair(x,i));
    }
    for (int j = 0; j < m; j++) {
        int request;
        cin >> request;
        set<pair<int,int>>::iterator p = --s.end();
        int largest = p->first;
        int key = p->second;
        sol += largest;
        sol %= 7919;
        s.erase(make_pair(largest,key));
        int remain = largest - request;
        s.insert(make_pair(remain,++i));
    }
    cout << sol;
    return 0;
}

