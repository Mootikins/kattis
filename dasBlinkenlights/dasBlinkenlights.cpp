#include <bits/stdc++.h>

using namespace std;

int main( int argc, char* argv[] ) {
	int a, b, time;

	cin >> a >> b >> time;

	int big = max( a, b );

	int small = min( a, b );

	a = big;

	while ( big <= time ) {
		if ( big % small == 0 ) {
			cout << "yes";
			return 0;
		}

		big += a;
	}

	cout << "no";
	return 0;
}
