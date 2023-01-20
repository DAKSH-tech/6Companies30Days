#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n;cin>>n;int M=1e9+7;
    int dp[n+1];dp[0]=0;dp[1]=2;
    for(int i=2;i<=n;i++){
        dp[i]=(dp[i-1]*2)%M;
   }
   cout<<dp[n];
}