#include <iostream>

using namespace std;

int main( int argc, char* argv[] ) {
	int battles;
	string abil;

	cin >> battles;

	int won = battles;

	for ( int i = 0; i < battles; ++i ) {
		cin >> abil;

		for ( int j = 0; j < abil.size() - 1; j++ ) {
			if ( abil.at( j ) == 'C' && abil.at( j + 1 ) == 'D' ) won--;
		}
	}

	cout << won;

	return 0;
}
