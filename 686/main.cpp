#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    bool composite[33000] = {true,true};
    for(int i = 0; i < 33000; i++) {
        cout << composite[i] << " " << i + 1  << endl;
    }
    for( int i = 2 ; i < 33000 ; i++ )
        if( !composite[i] )
            for( int j = i+i ; j < 33000 ; j += i )
                composite[j] = true;

    int n, count;
    while( scanf( "%d", &n ) != EOF && n ){

        count = 0;
        for( int i = 2 ; i <= n/2 ; i++ )
            if( !composite[i] && !composite[n-i] ) count++;

        printf( "%d\n", count );
    }
    return 0;
}