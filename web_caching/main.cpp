#include <iostream>
#include <queue>
#include <set>

using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    queue<int> queue;
    set<int> set;
    int countMiss = 0;
    for (int i = 0; i < m; i++) {
        int x = 0;
        cin >> x;
        if ((int)queue.size() < n) {
            if (set.find(x) == set.end()) {
                queue.push(x);
                set.insert(x);
                countMiss++;
            }

        } else if ((int)queue.size() == n) {
            if (set.find(x) == set.end()) {
                set.erase(queue.front());
                queue.pop();
                queue.push(x);
                set.insert(x);
                countMiss++;
            }
        }
    }
    cout << countMiss << endl;
    return 0;
}