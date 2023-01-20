#include <iostream>
using namespace std;
int main(){
    int n;cin>>n;
    long long a[n],count=0;
    cin>>a[0];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        int minN=min(a[i],a[i-1]);
        count+=(a[i-1]-minN);
        if(minN==a[i])
        a[i]+=(a[i-1]-minN);
    }
    cout<<count;
}