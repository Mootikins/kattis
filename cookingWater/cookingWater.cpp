#include <iostream>

using namespace std;

int main( int argc, char* argv[] ) {
	int boiled, startMax = 0, endMin = 1001, start, end;

	cin >> boiled;

	for ( int i = 0; i < boiled; ++i ) {
		cin >> start;

		if ( start > startMax ) startMax = start;

		cin >> end;

		if ( end < endMin ) endMin = end;
	}

	if ( endMin < startMax )
		cout << "edward is right";
	else
		cout << "gunilla has a point";

	return 0;
}
