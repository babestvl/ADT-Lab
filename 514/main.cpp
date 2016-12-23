#include <iostream>
#include <stack>

using namespace std;
int main() {
    int n, arr[1000];

    while(cin >> n && n) {
        while(cin >> arr[1] && arr[1]) {
            for(int i = 2; i <= n; i++) {
                cin >> arr[i];
            }
            stack<int> s;
            int A = 1, B = 1;
            bool check = true;
            while(B <= n) {
                if(A == arr[B]) {
                    A++; B++;
                } else if(!s.empty() && s.top() == arr[B]) {
                    s.pop();
                    B++;
                } else if(A <= n) {
                    s.push(A);
                    A++;
                } else {
                    check = false;
                    break;
                }
            }

            if (check) {
                cout << "Yes";
            } else {
                cout << "No";
            }
            cout << endl;
        }
        cout << endl;
    }
     return 0;
}