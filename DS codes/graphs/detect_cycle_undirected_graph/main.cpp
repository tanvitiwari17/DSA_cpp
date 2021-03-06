#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:

bool solvedfs(int src,int parent,vector<int>g[],vector<int> &vis){
    vis[src]=true;
    for(auto x:g[src]){
        if(!vis[x])
        {
            if(solvedfs(x,src,g,vis))
            return true;
        }
        else if(x!=parent) return true;
    }
    return false;
}

	bool isCycle(int V, vector<int>adj[]){
	    vector <int> vis(V,false);
	    for(int i=0;i<V;i++){
	        if(!vis[i])
	        {
	            bool res = solvedfs(i,-1,adj,vis);
	            if (res) return true;
	        }
	    }
	    return false;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isCycle(V, adj);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}  // } Driver Code Ends
