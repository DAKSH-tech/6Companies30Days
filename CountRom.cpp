#include <iostream>
using namespace std;
void dfs(char **a,int m,int n,int i,int j,bool **visited){
    if(i>=0 && j>=0 && i<m && j<n && !visited[i][j] && a[i][j]=='.'){
        visited[i][j]=true;
        dfs(a,m,n,i,j+1,visited);
        dfs(a,m,n,i,j-1,visited);
        dfs(a,m,n,i-1,j,visited);
        dfs(a,m,n,i+1,j,visited);
    }
}
int main(void){
    // Your code here!
    int m,n,count=0;cin>>m>>n;
    char **a=new char*[m];bool **visited=new bool*[m];
    for(int i=0;i<m;i++){
        a[i]=new char[n];
        visited[i]=new bool[n];
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            visited[i][j]=false;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]=='.' && visited[i][j]==false){
                dfs(a,m,n,i,j,visited);count++;
            }
        }
    }
    cout<<count;
}
