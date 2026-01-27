class Solution {
public:
    int minCost(int n, vector<vector<int>>& edges) {
         vector<vector<pair<int,int>>> adj(n);
        
        for (int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            int w = edges[i][2];
            adj[u].push_back({v, w});
            adj[v].push_back({u,2*w});
        }

         vector<int>result(n,INT_MAX);
        result[0]=0;
        
          priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
          pq.push({0,0});
          while(!pq.empty()){
              int node=pq.top().second;
              int dist=pq.top().first;
              pq.pop();
              for(auto&it:adj[node]){
                  int newnode=it.first;
                  int d=it.second;
                  if(d+dist<result[newnode]){
                      result[newnode]=d+dist;
                      pq.push({d+dist,newnode});
                  }
              }
          }

          return (result[n-1]==INT_MAX?-1:result[n-1]);
        
    }
};