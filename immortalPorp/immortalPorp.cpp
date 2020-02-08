#include <iostream>

uint64_t memo[100000];
using namespace std;
uint64_t fibb( uint64_t n ) {
	if ( n % 2 == 0 )
		memo[n] = ( fibb( n / 2 + 1 ) * fibb( n / 2 + 1 ) +
		            fibb( n / 2 ) * fibb( n / 2 ) ) %
		          1000000000;
	else
		memo[n] = ( 2 * fibb( n / 2 ) * fibb( n / 2 + 1 ) +
		            fibb( n / 2 + 1 ) * fibb( n / 2 + 1 ) ) %
		          1000000000;

	return memo[n];
}

int main( int argc, char* argv[] ) {
	uint64_t sets, years, currSet;

	cin >> sets;

	for ( int i = 0; i < sets; ++i ) {
		cin >> currSet >> years;

		cout << currSet << " " << fibb( years ) << endl;
	}

	return 0;
}
