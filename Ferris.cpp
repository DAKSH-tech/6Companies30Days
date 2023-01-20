#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n ,x;cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int i=0,j=n-1,count=0;
    while(i<=j){
        if(x-a[i]<=a[j]){
            bool b=true;
            while(b){ 
                count++;j--;
                if(x-a[i]>=a[j]){
                    count++;j--;i++;
                    b=false;
                }
            }
        }else{
            count++;i++;j--;
        }
    }
    cout<<count;
}