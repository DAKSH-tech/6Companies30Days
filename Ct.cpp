#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n,m;long long prev,prev_in;cin>>n>>m;long long a[n],b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    sort(a,a+n);
    for(int i=0;i<m;i++){
        prev=-1;//a[j]->above array
        for(int j=0;j<n;j++){
            if(a[j]!=-1){
                if(a[j]<=b[i] && a[j]>prev){
                    prev=a[j];
                    prev_in=j;
                }else{
                    break;
                }
            }
        }
        cout<<prev<<endl;
        a[prev_in]=-1;
        
    }
}

