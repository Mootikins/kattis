#include <bits/stdc++.h>
using namespace std;

int main( int argc, const char *argv[] ) {
	long long int length, origLength, n, origN, rolls = 1;

	cin >> origLength >> origN;
	length = origLength;
	n = origN;

	while ( length % n != 0 ) {
		n -= length % n;
		rolls++;
	}
	cout << rolls;

	return 0;
}
