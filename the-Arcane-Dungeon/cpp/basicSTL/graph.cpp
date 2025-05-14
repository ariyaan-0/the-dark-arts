#include <bits/stdc++.h>

using namespace std;

int main(){

	int n, m;
	cin>>n>>m;
	vector<vector<int>> g(n);

	for(int i=0; i<m; i++){
		int u, v;
		cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);//for undirected graph
	}

	cout<<"the graph: "<<endl;
	for(int i=0; i<n; i++){
		cout<<"Node "<<i<<": ";
		for(int j=0; j<g[i].size(); j++){
			cout<<g[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}