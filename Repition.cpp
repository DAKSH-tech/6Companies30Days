#include <iostream>
using namespace std;
int main(){
    //ATTCGGGA
    string s;cin>>s;int count=1,om=1;
    for(int i=1;i<s.size();i++){
        if(s[i-1]==s[i]){
            count++;
        }else{
            count=1;
        }
        if(om<count){
            om=count;
        }
    }
    cout<<om;
}