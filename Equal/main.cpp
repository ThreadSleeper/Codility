#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    cin >> T;
    for(int k = 0; k < T; k++){
    int N, result =0;
   cin >> N;
    int C[N];
   for(int i = 0; i < N; i++){
      cin >> C[i];
   }

    sort(C, C + N);

    for(int i = 0; i < N-1; i++){
        if (C[i+1]-C[i] == 0)
            continue;
        else if (C[i+1]-C[i] == 1)
            C[i+1] -=1;
        else if (C[i+1]-C[i] == 2)
            C[i+1] -=2;
        else if (C[i+1]-C[i] == 3) {
            C[i+1] -=3;
            result++;
        }
        else if (C[i+1]-C[i] == 4) {
            C[i+1] -=4;
            result++;
        }
        else if (C[i+1]-C[i] == 5)
            C[i+1] -=5;
        else if (C[i+1]-C[i] > 5) {
            C[i+1] -=5;
            i--;
        }
        result++;

    }

    cout << result << "\n";
        result = 0;
    }


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
