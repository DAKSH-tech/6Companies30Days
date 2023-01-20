#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;n--;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);bool b=true;
    for(int i=1;i<=n;i++){
        if(a[i-1]!=i){
            b=false;
            cout<<i;break;
        }
    }
    if(b){
        cout<<n+1;
    }
}