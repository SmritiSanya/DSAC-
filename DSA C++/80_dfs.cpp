#include<bits/stdc++.h>
using namespace std;

void DFS(int node,unordered_map<int,bool>&vis,
unordered_map<int,list<int>>&adj,vector<int>&comp){
    comp.push_back(node);
    vis[node]=true;

    //har connected node k liye recursive call
    for(auto i:adj[node]){
        if(!vis[i]){
            DFS(i,vis,adj,comp);
        }
    }
}


vector<vector<int>>dfs(int V,int E, vector<vector<int>>edges){
    //prepare adjList
    unordered_map<int,list<int>>adj;
    for(int i=0;i<edges.size();i++){
        int u=edges[i][0];
        int v=edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<vector<int>>ans;
    unordered_map<int,bool>vis;
    for(int i=0;i<V;i++){
        if(!vis[i]){
            vector<int>comp;
            DFS (i,vis,adj,comp);
            ans.push_back(comp);
        }
    }
    return ans;
}

