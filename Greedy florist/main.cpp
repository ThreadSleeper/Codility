/* Sample program illustrating input/output */
#include<iostream>
#include<algorithm>
using namespace std;
int main(void){



//Helpers for input and output

   int N, K;
   cin >> N >> K;
    int C[N];
    int A[K];
   for(int i = 0; i < N; i++){
      cin >> C[i];
   }

   int result=0;

    for(int i = 0; i < K; i++){
        A[i]=0;
    }

    sort(C, C + N);

    int i = 0;

        for(int j = N-1; j >= 0; j--){
            result += (A[i]+1)*C[j];
            A[i]++;
            i=i+1;
            if (i>=K)
                i=0;
        }

   cout << result << "\n";

   return 0;
}
