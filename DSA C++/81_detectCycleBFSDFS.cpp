#include<bits/stdc++.h>
using namespace std;


bool isCycleDFS(int node,int parent, unordered_map<int,bool>&vis,unordered_map<int,list<int>>&adj){
    vis[node]=true;
    for(auto i:adj[node]){
        if(!vis[i]){
            bool cycleDetected=isCycleDFS(i,node,vis,adj);
            if(cycleDetected){
                return true;
            }
        }
        else if(i!=parent){
            //cycle present
            return true;
        }

    }
    return false;

}




bool isCycleBFS(int src, unordered_map<int,bool>&vis,
unordered_map<int,list<int>>&adj){
    unordered_map<int,int>parent;
    parent[src]=-1;
    vis[src]=1;
    queue<int>q;
    q.push(src);


    while(!q.empty()){
        int front=q.front();
        q.pop();

        for(auto i:adj[front]){
            if(vis[i]==true&&i!=parent[front]){
                return true;
            }
            else if(!vis[i]){
                q.push(i);
                vis[i]=1;
                parent[i]=front;
            }
        }
    }
    return false;
}


string cycleDetection(vector<vector<int>>&edges,int n, int m){
    //create adjacency list
    unordered_map<int,list<int>>adj;
    for(int i=0;i<edges.size();i++){
        int u=edges[i][0];
        int v=edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    unordered_map<int,bool>vis;
    //handle disconnected components
    for(int i=0;i<n;i++){
        if(!vis[i]){
            bool ans=isCycleBFS(i,vis,adj);
            //bool ans=isCycleDFS(i,-1,vis,adj);
            if(ans==1){
                return "Yes";
            }
        }
    }
    return "No";
}