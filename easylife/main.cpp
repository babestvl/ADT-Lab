#include <iostream>

using namespace std;

int main() {
    int N,Ai,Bi,Hi;
    cin >> N;
    int days[31] = {};
    int jobs = N;

    for (int i = 0; i < N; i++){
        cin >> Ai >> Bi >> Hi;
        for(int j = Ai - 1 ; j < Bi; j++){
            days[j] = days[j] + Hi;

            if(days[j] > 6){
                jobs--;

                for(int k = j; k >= Ai-1; k--){
                    days[k] = days[k] - Hi;
                }
                break;
            }
        }
    }
    cout << jobs << endl;
    return 0;
}
