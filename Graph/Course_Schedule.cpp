class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        int n = prerequisites.size();

        unordered_map<int, vector<int>> adj;
        vector<int> indegree(numCourses, 0);

        for (int i = 0; i < n; i++) {

            int u = prerequisites[i][0];
            int v = prerequisites[i][1];

            adj[v].push_back(u);
            indegree[u]++;
        }

        queue<int> que;
        int cnt = 0;

        for (int i = 0; i < numCourses; i++) {
            if (indegree[i] == 0) {
                que.push(i);
                cnt++;
            }
        }

        while (!que.empty()) {

            int node = que.front();
            que.pop();

            for (auto adjNode : adj[node]) {

                indegree[adjNode]--;
                if (indegree[adjNode] == 0) {
                    que.push(adjNode);
                    cnt++;
                }
            }
        }

        return cnt == numCourses;
    }
};