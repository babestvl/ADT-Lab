#include <iostream>
#include <queue>

using namespace std;
int main() {
	int n;
	while(cin >> n && n) {
		int ans = 0;
		priority_queue<int, vector<int>, greater<int>> q;
		for(int i=0;i<n;i++) {
			int x;
			cin >> x;
			q.push(x);
		}
		while(q.size() > 1) {
			int a,b;
			a = q.top();
			q.pop();
			b = q.top();
			q.pop();
			ans += a+b;
			q.push(a+b);
		}
		cout << ans << endl;
	}
	return 0;
}