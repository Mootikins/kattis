#include <iostream>
#include <vector>

using namespace std;
bool dfs ( int curr, vector<bool> &seen, vector<vector<int>> &adj );

int main ( int argc, char* argv[] )
{
	int nodes, edges, cities;
	cin >> cities;

	for ( int i = 0; i < cities; ++i ) {
		cin >> nodes >> edges;
		vector<bool> seen ( nodes, false );
		int unreach = 0;
		vector<vector<int>> adj ( nodes );

		for ( int j = 0; j < edges; j++ ) {
			int a, b;
			cin >> a >> b;
			adj[a].push_back ( b );
			adj[b].push_back ( a ); // skip this line for a directed graph
		}

		for ( int j = 0; j < nodes; ++j ) {
			if ( !seen[j] ) {
				dfs ( j, seen, adj );
				unreach++;
			}
		}

		cout << unreach - 1 << endl;
	}

	return 0;
}

bool dfs ( int curr, vector<bool> &seen, vector<vector<int>> &adj )
{
	if ( seen[curr] == true )
		return false;

	seen[curr] = true;

	for ( auto next : adj[curr] )
		if ( dfs ( next, seen, adj ) ) return true;

	return false;
}
