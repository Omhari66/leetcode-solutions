class Solution {
private:
    void dfs(vector<int>& visited,int u, vector<vector<int>>& adj){
        visited[u]=1;
        for(int neigh:adj[u]){
            if(!visited[neigh]){
                dfs(visited,neigh,adj);
            }
        
        }
    }
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n=edges.size();
        vector<vector<int>>adj(n+1);
        for(int i=0;i<n;i++){
        vector<int>visited(n+1,0);
            int u=edges[i][0];
            int v=edges[i][1];
            dfs(visited,u,adj);
            if(visited[v]){
                return{u,v};
            }else{
                adj[u].push_back(v);
                adj[v].push_back(u);
            }
        }
        
    return {};
    }
};