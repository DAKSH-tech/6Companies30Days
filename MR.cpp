#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n,e,p,qq;cin>>n>>e;
   vector<int> v[n+1];
   for(int i=0;i<e;i++){
       cin>>p>>qq;
       v[p].push_back(qq);
       v[qq].push_back(p);
   }
   vector<int> parent;queue<int> q;q.push(1);vector<bool> visited(n);
   while(!q.empty()){
       int cur=q.front();bool b=false;
       for(auto i:v[cur]){
           if(!visited[i]){
               q.push(i);b=true;visited[i]=true;
           }
       }
       if(b){
           parent.push_back(cur);
       }
       visited[cur]=true;
       q.pop();
   }
   parent.push_back(n);
   for(auto i:parent){
       cout<<i<<" ";
   }
}