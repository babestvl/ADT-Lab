#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n, top;
    queue<int> q;

    while (cin >> n && n) {
        for (int i = 1; i <= n; i++) {
            q.push(i);
        }

        cout << "Discarded cards:";
        while (q.size() > 1) {
            cout << " " << q.front();
            q.pop();
            top = q.front();
            q.pop();
            if (!q.empty())
               cout << ",";
            q.push(top);
        }
        cout << endl << "Remaining card: " << q.front() << endl;
        q.pop();
    }

    return 0;
}