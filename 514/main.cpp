//#include<iostream>
//#include<stack>
//
//using namespace std;
//
//int n, c;
//stack<int> trains;
//
//void marshal() {
//    while(true) {
//        while(trains.size() > 0) {
//            trains.pop();
//        }
//        int j = 0;
//        for(int i = 0; i < n; i++) {
//            cin >> c;
//            if(c == 0) {
//                return;
//            }
//
//            while(j < n && j != c) {
//                if(trains.size() > 0 && trains.top() == c) {
//                    break;
//                }
//                j++;
//                trains.push(j);
//            }
//            if(trains.top() == c) {
//                trains.pop();
//            }
//        }
//        if(trains.size() == 0) {
//            cout << "Yes" << endl;
//        } else {
//            cout << "No" << endl;
//        }
//    }
//}
//
//int main() {
//    while(true) {
//        cin >> n;
//        if(n == 0) {
//            break;
//        }
//        marshal();
//        cout << endl;
//    }
//}

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