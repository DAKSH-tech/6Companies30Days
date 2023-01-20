#include <bits/stdc++.h>
using namespace std;
int main(void){
   long long n,i=5,ans=0;cin>>n;
   while(n/i!=0){
       ans+=(n/i);i*=5;
   }
   cout<<ans;
}