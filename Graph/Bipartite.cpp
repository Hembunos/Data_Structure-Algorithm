class Solution {
public:
    bool dfs(int node, vector<vector<int>>& adj, vector<int>& colors,
             int currColor) {

        colors[node] = currColor;

        for (auto it : adj[node]) {

            if (colors[it] == -1) {
                if (dfs(it, adj, colors, 1 - currColor) == false)
                    return false;
            }

            else if (colors[it] == colors[node])
                return false;
        }

        return true;
    }

    bool bfs(int startNode, vector<vector<int>>& adj, vector<int>& colors,
             int currColor) {

        queue<int> q;
        q.push(startNode);

        colors[startNode] = currColor;

        while (!q.empty()) {

            int currNode = q.front();
            q.pop();

            for (auto& adjNode : adj[currNode]) {

                if (colors[adjNode] == -1) {
                    colors[adjNode] = 1 - colors[currNode];
                    q.push(adjNode);
                } else if (colors[adjNode] == colors[currNode]) {
                    return false;
                }
            }
        }

        return true;
    }

    bool isBipartite(vector<vector<int>>& graph) {

        int V = graph.size();
        vector<int> colors(V, -1);

        for (int i = 0; i < V; i++) {
            if (colors[i] == -1) {
                if (bfs(i, graph, colors, 1) == false)
                    return false;
            }
        }
        return true;
    }
};