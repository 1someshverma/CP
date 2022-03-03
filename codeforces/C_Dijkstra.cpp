#include<bits/stdc++.h>
using namespace std;

const int N=6;
const int INF=1e9+6;
vector<pair<int,int>>g[N];
vector<int>vis(N);
vector<int>dist(N);
vector<int>par(N);

void printsp(int source,int node_for_path){
    for(int i=0;i<N;i++){
        vis[i]=0;
        dist[i]=INF;
        par[i]=-1;
    }
    dist[source]=0;
    set<pair<int,int>>st;
    st.insert({0,source});
    while(!st.empty()){
        auto node=*st.begin();
        st.erase(st.begin());
        int v=node.second;
        int dis=node.first; 
        if(vis[source]==1){
            continue;
        }
        vis[source]=1;
        for(auto child:g[v]){
            int wt=child.second;
            int child_v=child.first;
            if(dist[v]+wt<dist[child_v]){
                dist[child_v]=dist[v]+wt;
                st.insert({dist[child_v],child_v});
                par[child_v]=v;
            }
        }
    }
    stack<int>path;
    while(par[node_for_path]!=-1){
         path.push(node_for_path);
         node_for_path=par[node_for_path];
    }
    path.push(node_for_path);
    
    if(path.empty()==1){
        cout<<"-1"<<endl;
    }else{
        while(!path.empty()){
        cout<<path.top()<<" ";
        path.pop();
        }
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    while(m--){
        int x,y,wt;
        cin>>x>>y>>wt;
        g[x].push_back({y,wt});
        g[y].push_back({x,wt});
    }
    printsp(1,n);
    return 0;
}