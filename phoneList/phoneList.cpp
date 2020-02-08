#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool consistent( vector<string>& nums ) {
	for ( int i = 1; i < nums.size(); ++i ) {
		if ( nums[i - 1] == nums[i].substr( 0, nums[i - 1].length() ) )
			return false;
	}

	return true;
}

int main( int argc, char* argv[] ) {
	int n, cases;
	cin >> cases;

	while ( cases-- ) {
		cin >> n;
		vector<string> nums( n );

		for ( int i = 0; i < n; ++i ) cin >> nums[i];

		sort( nums.begin(), nums.end() );

		if ( consistent( nums ) )
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}
