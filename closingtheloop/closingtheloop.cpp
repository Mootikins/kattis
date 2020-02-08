#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main( int argc, char* argv[] ) {
	int cases, ropes;
	cin >> cases;

	for ( int i = 0; i < cases; ++i ) {
		string currRope;
		vector<int> red;
		vector<int> blue;

		cin >> ropes;

		for ( int j = 0; j < ropes; ++j ) {
			cin >> currRope;

			if ( currRope[currRope.length() - 1] == 'B' ) {
				currRope.pop_back();
				int ropelen = stoi( currRope ) - 1;
				blue.push_back( ropelen );
			} else if ( currRope[currRope.length() - 1] == 'R' ) {
				currRope.pop_back();
				int ropelen = stoi( currRope ) - 1;
				red.push_back( ropelen );
			}
		}
	}

	return 0;
}
