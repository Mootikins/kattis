#include <bits/stdc++.h>

using namespace std;

int main() {
	vector<int> a, b;
	int num;
	for ( int i = 0; i < 4; i++ ) {
		cin >> num;
		a.push_back( num );
	}
	for ( int i = 0; i < 4; i++ ) {
		cin >> num;
		b.push_back( num );
	}

	int sum1 = accumulate( a.begin(), a.end(), 0 );
	int sum2 = accumulate( b.begin(), b.end(), 0 );

	if ( sum1 > sum2 ) {
		cout << "Gunnar" << endl;
	} else if ( sum1 == sum2 ) {
		cout << "Tie" << endl;
	} else {
		cout << "Emma" << endl;
	}

	return 0;
}
