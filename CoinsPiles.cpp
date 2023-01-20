#include <iostream>
using namespace std;
int main(){
    int t;cin>>t;long long a,b;
    while(t--){
        cin>>a>>b;
        if(a%2==b/2 || a/2==b%2){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}