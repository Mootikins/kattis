#include <iostream>
#include <string>

using namespace std;

int main( int argc, char* argv[] ) {
	int flips;
	string first, second;

	cin >> flips >> first >> second;

	if ( flips % 2 == 0 && first == second )
		cout << "Deletion succeeded";
	else {
		for ( int i = 0; i < first.size(); ++i ) {
			if ( first[i] == second[i] ) {
				cout << "Deletion failed";
				return 0;
			}
		}

		cout << "Deletion succeeded";
	}

	return 0;
}
