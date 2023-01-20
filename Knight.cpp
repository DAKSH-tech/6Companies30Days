#include <bits/stdc++.h>
using namespace std;
int main(void){
    long long k,p;cin>>k;int M=1000000007;
    for(int i=1;i<=k;i++){
        p=i*i;
        long long res=(((i-2)*(i-1))%M)*4;
        cout<<(p*(p-1))/2-res<<endl;
    }
}