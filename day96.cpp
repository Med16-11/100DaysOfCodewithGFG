int countPaths(int v, vector<int> adj[], int source, int destination) {
        // Code here
        int count = 0;
        vector<bool>visited(v+1,false);
        for(int i = 0; i <= v; i++)
        {   
            if(i == source)
            {   
                visited[source] = true;
                dfs(source, adj, destination, count, visited);
            }
        }
        return count;
    }
