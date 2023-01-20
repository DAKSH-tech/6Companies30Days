#include <bits/stdc++.h>
using namespace std;
const int M=1e9+7;
int main(void){
    int n;cin>>n;
    long long dp[n+1];dp[0]=1;
    int i=1;
    if(n<=6){
        while(i<=n){
            int j=1;dp[i]=0;
            while(i-j>=0){
                dp[i]+=dp[i-j];
                j++;
            }i++;
        }
    }else{
        int i=1;
        while(i<=6){
            int j=1;dp[i]=0;
            while(i-j>=0){
                dp[i]+=dp[i-j];
                j++;
            }i++;
        }
        for(i=7;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2]+dp[i-3]+dp[i-4]+dp[i-5]+dp[i-6];
            dp[i]%=M;
        }
    }
    cout<<dp[n];
}