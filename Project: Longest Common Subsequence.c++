#include <iostream>
using namespace std;

int main(){
    string a="abc", b="ac";
    int dp[4][3]={0};

    for(int i=1;i<=3;i++){
        for(int j=1;j<=2;j++){
            if(a[i-1]==b[j-1])
                dp[i][j]=1+dp[i-1][j-1];
            else
                dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
        }
    }

    cout<<dp[3][2];
}
