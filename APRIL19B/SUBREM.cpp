// SUBREM
#include<bits/stdc++.h> 
#define ll long long int
using namespace std; 

void DFS(vector<int> adj[], ll u, bool visited[], ll  weight[], ll k)
{
	visited[u] = 1;
	for(auto x : adj[u])
	{
		if(!visited[x])
		{
			DFS(adj, x, visited, weight, k);
			weight[u] += weight [x]; 
		}
	}
	weight[u] = max(weight[u], k);
}

int main() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	{
		ll n, x;
		cin >> n >> x;
		ll u, v;
		bool visited[n + 1];
		memset(visited, 0, sizeof(visited));
	    vector<int> adj[n + 1];
	    
	    ll weight[n + 1];
	    
	    for(int i = 1; i <= n; i++)
	    	cin >> weight[i];
		
	    for(int i = 1; i < n; i++)
	    {
	    	cin >> u >> v;
	    	adj[u].push_back(v);
	    	adj[v].push_back(u);
		}
		
		DFS(adj, 1, visited, weight, -1 * x);
		
		cout << weight[1] << endl;
	}
    return 0; 
} 
