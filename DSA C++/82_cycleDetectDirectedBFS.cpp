#include<bits/stdc++.h>
using namespace std;

int detectCycle(int n,vector<pair<int,int>>&edges){
    //create adj list
    unordered_map<int,list<int>>adj;
    for(int i=0;i<edges.size();i++){
        int u=edges[i].first;
        int v=edges[i].second;

        adj[u].push_back(v);        
    }

    //find all indegrees
    vector<int>indegrees(n,0);
    for(auto i:adj){
        for(auto j:i.second){
            indegrees[j]++;
        }
    }

    //0 degree walo ko push kardo
    queue<int>q;
    for(int i=0;i<n;i++){
        if(indegrees[i]==0){
            q.push(i);
        }
    }

    //do bfs w update
    int cnt=0;
    while(!q.empty()){
        int front=q.front();
        q.pop();

        //int count
        cnt++;

        //other elements in adj list ka indegrees update
        for(auto i:adj[front]){
            indegrees[i]--;
            if(indegrees[i]==0){
                q.push(i);
            }
        }
    }

    if(cnt==n){
        return false;
    }
    return true;
}