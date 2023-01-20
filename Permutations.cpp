#include <iostream>
using namespace std;
int main(){
    int n;cin>>n;string s="";
    if(n==1){
        s="1";
    }else if(n==2||n==3){
        s="NO SOLUTION";
    }else{
        if(n%2!=0){
            for(int i=2;i<=n-1;i+=2){
                s+=to_string(i)+" ";
            }
            for(int i=1;i<=n;i+=2){
                s+=to_string(i)+" ";
            }
        }else{
            for(int i=2;i<=n;i+=2){
                s+=to_string(i)+" ";
            }
            for(int i=1;i<=n-1;i+=2){
                s+=to_string(i)+" ";
            }
        }
    }
    cout<<s;
}