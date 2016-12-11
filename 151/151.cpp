#include<iostream>

using namespace std;

int main(){
    int n, m, down;

    while( cin >> n && n ){
        n--;
        for( m = 1 ; m < n ; m++ ){
            down = 0;
            for( int i = 1 ; i <= n ; i++ ) {
                down = (down + m) % i;
            }
            if( down == 11 ) {
                break;
            }
        }
        cout << m << endl;
    }
    return 0;
}