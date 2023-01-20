#include <iostream>
using namespace std;
int main(void){
    int t;cin>>t;
    while(t--){
        long long m,n;cin>>m>>n;
        if(m>=n){
            if(m%2==0){
                //even row
                cout<<(m*m)-(n-1)<<endl;
            }else{
                m-=1;
                cout<<(m*m)+n<<endl;
            }
        }else{
            if(n%2!=0){
                //odd column
                cout<<(n*n)-(m-1)<<endl;
            }else{
                n-=1;
                cout<<(n*n)+m<<endl;
            }
        }
    }
}