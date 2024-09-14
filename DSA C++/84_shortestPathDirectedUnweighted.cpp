#include<bits/stdc++.h>
using namespace std;

vector<int>shortestPath(vector<pair<int,int>>edges,int n,int m,int s,int t){
    //n:number of nodes
    //s:src t:destination
    //m:number of edges
    //edges: states all the edges

    //creating adj list
    unordered_map<int,list<int>>adj;
    for(int i=0;i<edges.size();i++){
        int u=edges[i].first;
        int v=edges[i].second;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    //do bfs
    unordered_map<int, bool>vis;
    unordered_map<int,bool>parent;
    vector<int>ans;
    queue<int>q;
    q.push(s);
    vis[s]=true;
    parent[s]=-1;

    while(!q.empty()){
        int front=q.front();
        q.pop();

        for(auto i:adj[front]){
            if(!vis[i]){
                vis[i]=true;
                parent[i]=front;
                q.push(i);

            }
        }
    }

    //prepare shortest path
    int curr=t;

    while(curr!=s){
        curr=parent[curr];
        ans.push_back(curr);
    }

    //reverse
    reverse(ans.begin(),ans.end());

    return ans;
}