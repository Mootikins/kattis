#include <iostream>
#include <string>

using namespace std;

int main( int argc, char* argv[] ) {
	string names;

	cin >> names;

	for ( int i = 0; i < names.length(); ++i ) {
		if ( i == 0 )
			cout << names.at( i );
		else if ( names.at( i ) == '-' )
			cout << names.at( i + 1 );
	}

	return 0;
}
