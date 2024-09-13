#include<bits/stdc++.h>
using namespace std;

bool isCycleDFS(int node,unordered_map<int,bool>&vis,
    unordered_map<int,bool>&dfsvis,unordered_map<int,list<int>>adj){
        vis[node]=true;
        dfsvis[node]=true;

        for(auto i:adj[node]){
            if(!vis[i]){
                bool detect=isCycleDFS(i,vis,dfsvis,adj);
                if(detect)
                    return true;
            }
            else if(dfsvis[i]){
                return true;
            }
        }
        dfsvis[node]=false;
        return false;

    }


bool cycleDetection(int n,vector<vector<int>>&edges){
    //create adjacency list
    unordered_map<int,list<int>>adj;
    for(int i=0;i<edges.size();i++){
        int u=edges[i][0];
        int v=edges[i][1];

        adj[u].push_back(v);
    }

    unordered_map<int,bool>vis;
    unordered_map<int,bool>dfsvis;
    //handle disconnected components
    for(int i=0;i<=n;i++){
        if(!vis[i]){
            bool ans=isCycleDFS(i,vis,dfsvis,adj);
            if(ans){
                return true;
            }
        }
    }
    return false;
}