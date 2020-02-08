#include <bits/stdc++.h>

using namespace std;

int main() {
	vector<int> blimps;
	for ( int i = 0; i < 5; i++ ) {
		string name;
		cin >> name;
		if ( name.find( "FBI" ) != -1 ) {
			blimps.push_back( i + 1 );
		}
	}

	if ( blimps.size() == 0 ) {
		cout << "HE GOT AWAY!" << endl;
	} else {
		for ( int i = 0; i < blimps.size(); i++ ) {
			cout << blimps[i];
			if ( i != blimps.size() - 1 ) {
				cout << " ";
			}
		}
		cout << endl;
	}

	return 0;
}
