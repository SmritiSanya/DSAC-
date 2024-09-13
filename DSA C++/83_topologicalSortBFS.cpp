#include<bits/stdc++.h>
using namespace std;



vector<int>topologicalSort(vector<vector<int>>&edges,int vertex,int n){
    //create adj list
    unordered_map<int,list<int>>adj;
    for(int i=0;i<edges.size();i++){
        int u=edges[i][0];
        int v=edges[i][1];

        adj[u].push_back(v);        
    }

    //find all indegrees
    vector<int>indegrees(vertex,0);
    for(auto i:adj){
        for(auto j:i.second){
            indegrees[j]++;
        }
    }

    //0 degree walo ko push kardo
    queue<int>q;
    for(int i=0;i<vertex;i++){
        if(indegrees[i]==0){
            q.push(i);
        }
    }

    //do bfs w update
    vector<int>ans;
    while(!q.empty()){
        int front=q.front();
        q.pop();

        //ans store
        ans.push_back(front);

        //other elements in adj list ka indegrees update
        for(auto i:adj[front]){
            indegrees[i]--;
            if(indegrees[i]==0){
                q.push(i);
            }
        }
    }

    return ans;
}