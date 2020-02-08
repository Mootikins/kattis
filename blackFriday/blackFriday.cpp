#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> nums;
	int inserted;
	for ( int i = 0; i < n; i++ ) {
		cin >> inserted;
		nums.push_back( inserted );
	}
	map<int, int> freqs;

	for ( int i = 0; i < nums.size(); i++ ) {
		if ( freqs.count( nums.at( i ) ) == 0 ) {
			freqs.insert( pair<int, int>( nums.at( i ), 1 ) );
		} else {
			freqs.at( nums.at( i ) )++;
		}
	}

	int foundNum = -1;
	for ( auto num : freqs ) {
		if ( num.second == 1 ) {
			foundNum = num.first;
		}
	}

	int foundIndex = -1;
	for ( int i = 0; i < nums.size(); i++ ) {
		if ( nums.at( i ) == foundNum ) {
			foundIndex = i;
		}
	}
	if ( foundIndex == -1 ) {
		cout << "none";
	} else {
		cout << foundIndex + 1;
	}

	return 0;
}
