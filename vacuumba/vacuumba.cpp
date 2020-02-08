#include <bits/stdc++.h>

using namespace std;

#define PI 3.141592653589

int main() {
	int cases;
	cin >> cases;
	for ( int i = 0; i < cases; i++ ) {
		int segments;
		cin >> segments;
		double x = 0, y = 0;
		double dist, deg;
		double curr_dir = 90;
		for ( int j = 0; j < segments; j++ ) {
			cin >> deg >> dist;
			curr_dir += deg;
			x += dist * cos( curr_dir * PI / 180 );
			y += dist * sin( curr_dir * PI / 180 );
		}
		cout << setprecision( 7 ) << fixed << x << " " << y << endl;
	}

	return 0;
}
