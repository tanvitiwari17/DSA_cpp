#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:

bool solve(int src, vector <int> &vis, vector <int> &order , vector <int> g[]){
    vis[src]=1;
    order[src]=1;
    for(auto x: g[src])
    {
        if(!vis[x])
        {
            bool conf = solve(x,vis,order,g);
            if (conf==true)
            return true;
        }
        else if(order[x]) return true;
    }
    order[src]=0;
    return false;
}

	bool isCyclic(int V, vector<int> adj[]) {
	   	vector<int> vis(V,0);
	   	vector<int> order(V,0);
	   	for(int i=0;i<V;i++){
	   	    if(!vis[i]){
	   	        bool res = solve(i,vis,order,adj);
	   	        if(res==true)
	            	return true;
	   	    }
	   	}
	   	return false;
	}
};

// { Driver Code Starts.


int main()
{

    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

  // } Driver Code Ends
