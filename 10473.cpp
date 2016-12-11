#include <iostream>
#include<string>
#include<sstream>
#include <stdlib.h>
using namespace std;

int main() {
    string input;
    while (cin >> input) {
        int a = atoi(input.c_str());
        if (a > 0) {
            int count = 0;
            string arr[8];
            int hex,dec;
            dec = a;
            string s = "0x";
            for (int i = 0; dec > 0; i++)  {
                hex = dec%16;
                dec /= 16;
                if (hex == 10) arr[i] = "A";
                else if (hex == 11) arr[i] = "B";
                else if (hex == 12) arr[i] = "C";
                else if (hex == 13) arr[i] = "D";
                else if (hex == 14) arr[i] = "E";
                else if (hex == 15) arr[i] = "F";
                else {
                    stringstream ss;
                    ss << hex;
                    arr[i] = ss.str();
                }
                count++;

            }
            for (int i = count; i >= 0; i-- ) {
                s.append(arr[i]);
            }
            cout << s << endl;
        } else if (input[0] == '0'&&input[1]=='x'){
            int dec = 0;
            for (int i = 2; i < input.length(); i++) {
                if (input[i] == 'A')
                    dec = dec*16+10;
                else if (input[i] == 'B')
                    dec = dec*16+11;
                else if (input[i] == 'C')
                    dec = dec*16+12;
                else if (input[i] == 'D')
                    dec = dec*16+13;
                else if (input[i] == 'E')
                    dec = dec*16+14;
                else if (input[i] == 'F')
                    dec = dec*16+15;
                else {
                    int hex = input[i] - '0';
                    dec = dec * 16 + hex;

                }
            }
            cout << dec << endl;
        }
    }

    return 0;
}
