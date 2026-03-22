#include <iostream>
using namespace std;

int main(){
    int w[3]={1,2,3}, v[3]={6,10,12};
    int W=5;
    int dp[4][6]={0};

    for(int i=1;i<=3;i++){
        for(int j=1;j<=W;j++){
            if(w[i-1]<=j)
                dp[i][j]=max(dp[i-1][j], v[i-1]+dp[i-1][j-w[i-1]]);
            else
                dp[i][j]=dp[i-1][j];
        }
    }

    cout<<dp[3][W];
}
