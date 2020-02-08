#include <bits/stdc++.h>

using namespace std;

int main() {
	string rec;
	cin >> rec;
	bool scoring = false;
	int a = 0, b = 0;
	for ( int i = 0; i < rec.length(); i += 2 ) {
		if ( rec[i] == 'A' ) {
			a += ( rec[i + 1] == '1' ? 1 : 2 );
		} else if ( rec[i] == 'B' ) {
			b += ( rec[i + 1] == '1' ? 1 : 2 );
		}

		if ( a == 10 && b == 10 ) {
			scoring = true;
		}
		if ( !scoring && a >= 11 ) {
			cout << 'A' << endl;
			return 0;
		} else if ( !scoring && b >= 11 ) {
			cout << 'B' << endl;
			return 0;
		}
		if ( scoring && a - b >= 2 ) {
			cout << 'A' << endl;
			return 0;
		}
		if ( scoring && b - a >= 2 ) {
			cout << 'B' << endl;
			return 0;
		}
	}
	return 0;
}
