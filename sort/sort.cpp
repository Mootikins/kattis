#include <bits/stdc++.h>

using namespace std;

struct num {
	int freq;
	int number;
	num( int f, int n ) {
		this->freq = f;
		this->number = n;
	};
} /* optional variable list */;

bool compare( num i, num j ) { return ( i.freq > j.freq ); }

int main() {
	int nums, limit;
	cin >> nums >> limit;
	vector<num> numSet;

	for ( int i = 0; i < nums; i++ ) {
		int number;
		cin >> number;
		bool found = false;
		for ( int j = 0; j < numSet.size(); j++ ) {
			if ( numSet[j].number == number ) {
				found = true;
				numSet[j].freq++;
			}
		}
		if ( !found ) {
			numSet.push_back( num( 1, number ) );
		}
	}

	stable_sort( numSet.begin(), numSet.end(), compare );

	for ( auto number : numSet ) {
		for ( int i = 0; i < number.freq; i++ ) {
			cout << number.number << " ";
		}
	}
	cout << endl;

	return 0;
}
