#include <bits/stdc++.h>

using namespace std;

void dfs( vector<vector<int>> &graph, int start, vector<bool> &visited ) {
	visited[start] = true;
	for ( int i = 0; i < graph.size(); i++ ) {
		if ( !visited[i] && graph[start][i] > 0 ) {
			dfs( graph, i, visited );
		}
	}
}

int main() {
	int candidates, ballots;
	cin >> candidates >> ballots;

	vector<vector<int>> graph( candidates, vector<int>( candidates, 0 ) );

	for ( int i = 0; i < ballots; i++ ) {
		int num;
		string order;
		cin >> num >> order;

		for ( unsigned int j = 0; j < order.length(); j++ ) {
			for ( unsigned int k = j + 1; k < order.length(); k++ ) {
				graph[order[j] - (int)'A'][order[k] - (int)'A'] += num;
				graph[order[k] - (int)'A'][order[j] - (int)'A'] -= num;
			}
		}
	}

	for ( int i = 0; i < graph.size(); i++ ) {
		vector<bool> visited( graph.size(), false );
		dfs( graph, i, visited );
		bool winnable = true;
		for ( int j = 0; j < visited.size(); j++ ) {
			if ( !visited[j] ) {
				winnable = false;
			}
		}
		if ( winnable ) {
			cout << (char)( i + 'A' ) << ": can win" << endl;
		} else {
			cout << (char)( i + 'A' ) << ": can't win" << endl;
		}
	}

	return 0;
}
