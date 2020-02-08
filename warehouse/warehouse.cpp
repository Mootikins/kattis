#include <bits/stdc++.h>

using namespace std;

bool compare( pair<int, string> a, pair<int, string> b ) {
	if ( a.first == b.first ) {
		return a.second < b.second;
	}
	return a.first > b.first;
}

int main( int argc, char *argv[] ) {
	int cases, boxes;
	map<string, int> packages;
	string name;
	int value;

	cin >> cases;

	for ( int i = 0; i < cases; ++i ) {
		cin >> boxes;
		for ( int i = 0; i < boxes; ++i ) {
			cin >> name >> value;
			packages[name] += value;
		}
		vector<pair<int, string>> sorted;

		for ( auto i : packages ) {
			sorted.push_back( pair<int, string>( i.second, i.first ) );
		}

		sort( sorted.begin(), sorted.end(), compare );

		cout << sorted.size() << endl;

		for ( auto i : sorted ) {
			cout << i.second << " " << i.first << endl;
		}
		packages.clear();
	}

	return 0;
}
