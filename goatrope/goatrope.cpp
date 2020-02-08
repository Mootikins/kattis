#include <bits/stdc++.h>
using namespace std;

double pythag( double deltaX, double deltaY ) {
	double xSquared = pow( deltaX, 2 );
	double ySquared = pow( deltaY, 2 );
	return pow( xSquared + ySquared, 0.5 );
}

int main( int argc, const char *argv[] ) {
	int tetherX, tetherY, houseX1, houseY1, houseX2, houseY2;
	double rope;
	cin >> tetherX >> tetherY >> houseX1 >> houseY1 >> houseX2 >> houseY2;

	if ( houseX1 <= tetherX && tetherX <= houseX2 ) {
		if ( tetherY < houseY1 ) {
			rope = houseY1 - tetherY;
		} else {
			rope = tetherY - houseY2;
		}
	} else if ( houseY1 <= tetherY && tetherY <= houseY2 ) {
		if ( tetherX < houseX1 ) {
			rope = houseX1 - tetherX;
		} else {
			rope = tetherX - houseX2;
		}
	} else if ( tetherX < houseX1 && tetherY < houseY1 ) {
		double delX = houseX1 - tetherX;
		double delY = houseY1 - tetherY;
		rope = pythag( delX, delY );
	} else if ( tetherX < houseX1 && tetherY > houseY2 ) {
		double delX = houseX1 - tetherX;
		double delY = tetherY - houseY2;
		rope = pythag( delX, delY );
	} else if ( tetherX > houseX2 && tetherY > houseY2 ) {
		double delX = tetherX - houseX2;
		double delY = tetherY - houseY2;
		rope = pythag( delX, delY );
	} else {
		double delX = tetherX - houseX2;
		double delY = houseY1 - tetherY;
		rope = pythag( delX, delY );
	}

	cout << setprecision( 1 ) << fixed << rope;
	return 0;
}
