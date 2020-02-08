#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int main( int argc, char *argv[] ) {
	int maxDiff;
	cin >> maxDiff;
	string line;
	cin >> line;
	int currDiff = 0;
	int letIn = 0;

	while ( line.size() > 0 && abs( currDiff ) <= maxDiff ) {
		if ( line[0] != line[1] ) {
			if ( line[1] == 'M' && currDiff < 0 ) {
				line.erase( 1, 1 );
				currDiff++;
				letIn++;
			} else if ( line[1] == 'W' && currDiff > 0 ) {
				line.erase( 1, 1 );
				currDiff--;
				letIn++;
			} else {
				line[0] == 'M' ? currDiff++ : currDiff--;
				line.erase( 0, 1 );
				letIn++;
			}
		} else {
			line[0] == 'M' ? currDiff++ : currDiff--;
			line.erase( 0, 1 );
			letIn++;
		}
	}

	if ( abs( currDiff ) > maxDiff ) {
		letIn--;
	}
	cout << letIn;

	return 0;
}
