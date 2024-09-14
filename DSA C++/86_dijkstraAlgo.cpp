#include <bits/stdc++.h>
using namespace std;

vector<int> dijkstra(vector<vector<int>>& vec, int vertices, int source) {
    // Create adjacency list
    unordered_map<int, list<pair<int, int>>> adj;
    for (int i = 0; i < vertices; i++) {
        int u = vec[i][0];
        int v = vec[i][1];
        int w = vec[i][2];

        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }

    vector<int>dist(vertices, INT_MAX);
    set<pair<int, int>> st;
    dist[source] = 0;
    st.insert(make_pair(0, source));

    while (!st.empty()){
        // Fetch top
        auto top = *(st.begin());

        int nodeDist = top.first;
        int topNode = top.second;

        // Remove top
        st.erase(st.begin());

        // Traverse on neighbors
        for (auto neigh : adj[topNode]) {
            if (nodeDist + neigh.second < dist[neigh.first]) {
                // Find existing record in the set
                auto record = st.find(make_pair(dist[neigh.first], neigh.first));

                // If record found, remove it
                if (record != st.end()) {
                    st.erase(record);
                }

                // Update distance and insert new record
                dist[neigh.first] = nodeDist + neigh.second;
                st.insert(make_pair(dist[neigh.first], neigh.first));
            }
        }
    }

    return dist;
}