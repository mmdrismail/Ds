#include<bits/stdc++.h>
using namespace std ;
//void solve()
int main()
{
    int n,e;
    cin>>n>>e;
    vector<vector<int>>adj(n+1);
    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int s;
    cin>>s;
    vector<int>level(n+1,-1);
    level[s]=0;
    queue<int>q;
    q.push(s);
    while(!q.empty())
    {
        int u =q.front();
        q.pop();
       for(int v: adj[u]){
        if(level[v]==-1){
            level[v]=level[u]+1;
            q.push(v);
        }
       }
    }
    for(int i=1;i<=n;i++){
        cout<<level[i]<<" ";
    }
    return 0;
}



