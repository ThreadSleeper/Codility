#include <iostream>
#include<algorithm>

using namespace std;
//int solution (int C[], int k, int n);

int solution (int *C, int k, int n) {
    int dp[n][k];
    for (int i=0; i<=n; i++)
    {
            for (int j=0; j<=k; j++)
            {
                dp[i][j] =0;
            }
    }

    for (int i=1; i<=k+1; i++)
    {
        for (int j=0; j<=C[i-1]; j++)
            {
                dp[i][j] =dp[i-1][j];
            }
            for (int j=C[i-1]; j<=k; j++)
            {
                dp[i][j] = min (dp[i][j-C[i-1]] +1, dp[i-1][j]);
            }


    }
    return dp[n][k];

}

int main()
{
    int k,n=3;
    cin>>k;
    int C[k];
    for (int i=0; i<k; i++)
    {
        cin>>C[i];

    }
    //int dp[N] =
    solution(C, k, n);
    return 0;
}
