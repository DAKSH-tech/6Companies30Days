#include <bits/stdc++.h>
using namespace std;
void print(int a[],int n){
   // cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(void){
    // Your code here!
    int n,m,k,i=0,j=0,count=0;cin>>n>>m>>k;int a[n],b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    while(i<n&&j<m){
        if(a[i]-k<=b[j] && b[j]<=a[i]+k){
            j++;i++;count++;
        }else if(b[j]<a[i]-k){
            j++;
        }else{
            i++;
        }
    }
    cout<<count;
}

