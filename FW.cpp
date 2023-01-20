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
    int n,k,i=0,j,count=0;cin>>n>>k;int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }j=n-1;
    sort(a,a+n);
    while(i<=j){
        if(a[i]+a[j]>k){
            count++;j--;
        }else{
            count++;i++;j--;
        }
    }
    cout<<count;
}
