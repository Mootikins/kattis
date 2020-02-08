#include <bits/stdc++.h>

using namespace std;

int main() {
	vector<long long> nums( 3 );

	cin >> nums[0] >> nums[1] >> nums[2];
	while ( nums[0] != 0 ) {
		sort( nums.begin(), nums.end() );
		if ( abs( nums[0] * nums[0] + nums[1] * nums[1] - nums[2] * nums[2] ) <
		     0.001 ) {
			cout << "right" << endl;
		} else {
			cout << "wrong" << endl;
		}

		cin >> nums[0] >> nums[1] >> nums[2];
	}
	return 0;
}
