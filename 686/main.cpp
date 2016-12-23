#include <iostream>
using namespace std;

int main(){
    bool composite[33000] = {true,true};
    for( int i = 2 ; i < 33000 ; i++ ) {
        if (!composite[i]) {
            for (int j = i + i; j < 33000; j += i) {
                composite[j] = true;
            }
        }
    }
    int n;
    while( cin >> n && n ){
        int count = 0;
        for(int i = 2 ; i <= n/2 ; i++)
            if( !composite[i] && !composite[n-i] ) count++;

        cout << count << endl;
    }
    return 0;
}