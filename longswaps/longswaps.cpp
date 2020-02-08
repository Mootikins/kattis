#include <bits/stdc++.h>

using namespace std;

int main( int argc, const char *argv[] ) {
	string word;
	int k;

	cin >> word >> k;

	if ( k <= floor( word.length() / 2.0 ) ) {
		cout << "Yes";
		return 0;
	}
	string copy = word;
	sort( word.begin(), word.end() );

	for ( int i = word.size() - k; i < k; i++ ) {
		if ( word.at( i ) != copy.at( i ) ) {
			cout << "No";
			return 0;
		}
	}
	cout << "Yes";

	return 0;
}
