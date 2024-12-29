class Solution{
  public:

  bool dfs(int node, int parent, vector<bool>& visited, vector<vector<int>>& adj){
        
        visited[node] = true;
        
        for(auto adjNode: adj[node]){
            if(adjNode == parent) continue;
            
            else if(visited[adjNode] == false){
                if(dfs(adjNode,node,visited,adj) == true) return true;
            }
            else{
                return true;
            }
        }
        
        return false;
    }
    
    bool bfs(int node, vector<bool>& visited, vector<vector<int>>& adj){
        
        queue<pair<int,int>> q;
        q.push({node,-1});
        
        visited[node] = true;
        
        while(!q.empty()){
            
            pair<int,int> p = q.front();
            q.pop();
            
            int node = p.first;
            int parent = p.second;
            
            for(auto adjNode: adj[node]){
                if(adjNode == parent) continue;
                
                else if(visited[adjNode] == false){
                    q.push({adjNode,node});
                    visited[adjNode] = true;
                }else{
                    return true;
                }
            }
        }
        
        return false;
    }
    
    bool isCycle(vector<vector<int>>& adj) {
        // Code here
        int n = adj.size();
        
        vector<bool> visited(n,false);
        
        for(int i = 0; i < n; i++){
            if(!visited[i]){
                if(bfs(i,visited,adj) == true) return true;
            }
        }
        
        return false;
    }
}