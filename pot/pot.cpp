#include <cmath>
#include <iostream>

using namespace std;

int main( int argc, char* argv[] ) {
	long long int nums, curr, power, sum = 0;

	cin >> nums;

	for ( int i = 0; i < nums; ++i ) {
		cin >> curr;
		power = curr % 10;

		curr = floor( curr / 10 );
		sum += pow( curr, power );
	}

	cout << sum;
	return 0;
}
