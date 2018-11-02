#include <iostream>

using namespace std;

int main ( int argc, char* argv[] )
{
	long long int kids, tests, currKid;
	long long int candies;

	cin >> tests;

	for ( int i = 0; i < tests; ++i ) {
		cin >> kids;
		candies = 0;

		for ( int j = 0; j < kids; ++j ) {
			cin >> currKid;
			candies += currKid;
		}

		if ( abs ( candies % kids ) <= 0.05 )
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}
