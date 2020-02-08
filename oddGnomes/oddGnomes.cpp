#include <iostream>

using namespace std;

int main( int argc, char* argv[] ) {
	int groups, gnomes[1000], numGnomes;
	cin >> groups;

	for ( int i = 0; i < groups; ++i ) {
		cin >> numGnomes;

		for ( int j = 0; j < numGnomes; ++j ) cin >> gnomes[j];

		for ( int k = 1; k < numGnomes - 1; ++k ) {
			if ( gnomes[k] != gnomes[k - 1] + 1 ) {
				cout << k + 1 << endl;
				k = numGnomes - 1;
			}
		}
	}

	return 0;
}
