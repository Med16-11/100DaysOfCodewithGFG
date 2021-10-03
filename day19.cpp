//Detect cycle in an undirected graph 

bool dfs(int src, int parent, vector<int>adj[], vector<bool>&visitedArray){
        visitedArray[src] = true;
        for(auto a: adj[src]){
            if(!visitedArray[a]){
                if(dfs(a,src,adj,visitedArray))
                    return true;
            }
            else if(a!=parent)
                return true;
        }
        return false;
    }
    
    
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<bool>visitedArray(V,false);
        for(int i = 0; i <V ; i++){
            if(!visitedArray[i]){
                bool ans = dfs(i, -1,adj,visitedArray);
                if(ans)
                    return true;
            }
        }
        return false;
    }
