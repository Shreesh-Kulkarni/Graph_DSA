//undirected graph adjacency matrix implementation
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>> n >> m ;
    int adj[n+1][n+1];
    for(int i=0;i<(n+1)*(n+1);i++){
        int r=i/(n+1);
        int c= i%(n+1);
        adj[r][c]=0;
    }
    for(int i=0;i<m;i++){
        int u,v;
        cin>> u >> v;
        adj[u][v]=adj[v][u]=1;
    }
    for(int i=0;i<(n+1)*(n+1);i++){
        int r=i/(n+1);
        int c= i%(n+1);
        cout<<adj[r][c]<<" ";
    }
}
