#include <bits/stdc++.h>
using namespace std;

int main( int argc, const char *argv[] ) {
	string word, perm;
	int found = 0, hung = 0;
	vector<int> quantities = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	                          0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	cin >> word >> perm;

	map<char, int> wordSet;

	for ( auto letter : word ) {
		quantities.at( letter - (int)'A' )++;
	}

	for ( int i = 0; i < perm.length(); i++ ) {
		if ( quantities.at( perm.at( i ) - (int)'A' ) > 0 ) {
			found += quantities.at( perm.at( i ) - (int)'A' );
			if ( found >= word.length() ) {
				cout << "WIN";
				return 0;
			}
		} else {
			hung++;
			if ( hung >= 10 ) {
				cout << "LOSE";
				return 0;
			}
		}
	}

	return 0;
}
