#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    int n;cin>>n;
    unordered_map<int,bool> m;
    long long x;
    while(n--){
        cin>>x;
        if(m.count(x)>0){
            continue;
        }else{
            m[x]=true;
        }
    }
    cout<<m.size();
}