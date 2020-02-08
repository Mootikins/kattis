#include <cmath>
#include <iostream>

using namespace std;

const double EPSILON = 0.0001;
struct point {
	long double x, y;

	point( long double x_ = 0, long double y_ = 0 ) : x( x_ ), y( y_ ) {}

	// Only < operator is unusual behavior
	bool operator<( const point &other ) const {
		return ( x < other.x ? true : ( x == other.x && y < other.y ) );
	}

	bool operator==( const point &other ) const {
		return abs( other.x - x ) < EPSILON && abs( other.y - y ) < EPSILON;
	}

	/*
	point& operator - (const point& lhs, const point& rhs)
	{
	  return point(b.x - a.x, b.y - a.y);
	}
	*/

	// Add other operators as needed
};
struct segment {
	point p1, p2;
};

double dot( const point &a, const point &b, const point &c ) {
	point AB = point( b.x - a.x, b.y - a.y );
	point BC = point( c.x - b.x, c.y - b.y );
	return AB.x * BC.x + AB.y * BC.y;
}

double sqmag( const point &p1 ) { return p1.x * p1.x + p1.y * p1.y; }

// Magnitude of point vector
double mag( const point &p1 ) { return sqrt( sqmag( p1 ) ); }

int main( int argc, char *argv[] ) {
	int tris, x1, y1, x2, y2, x3, y3;

	cin >> tris;

	for ( int i = 0; i < tris; ++i ) {
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

		point A( x1, y1 );
		point B( x2, y2 );
		point C( x3, y3 );
		point AB( B.x - A.x, B.y - A.y );
		point BC( C.x - B.x, C.y - B.y );
		point CA( C.x - A.x, C.y - A.y );

		double angle1, angle2, angle3;

		angle1 = acos( dot( A, B, C ) / ( mag( AB ) * mag( BC ) ) ) * 180 / M_PI;
		angle2 = acos( dot( B, C, A ) / ( mag( BC ) * mag( CA ) ) ) * 180 / M_PI;
		angle3 = acos( dot( C, A, B ) / ( mag( CA ) * mag( AB ) ) ) * 180 / M_PI;

		if ( angle1 < EPSILON || angle1 > 180 - EPSILON )
			cout << "Case #" << i + 1 << ":"
			     << " not a triangle" << endl;
		else if ( angle2 < EPSILON || angle2 > 180 - EPSILON )
			cout << "Case #" << i + 1 << ":"
			     << " not a triangle" << endl;
		else if ( angle3 < EPSILON || angle3 > 180 - EPSILON )
			cout << "Case #" << i + 1 << ":"
			     << " not a triangle" << endl;
		else if ( ( angle1 - angle2 <= EPSILON ) ||
		          ( angle2 - angle3 <= EPSILON ) ||
		          ( angle3 - angle1 <= EPSILON ) ) {
			if ( angle1 - angle2 <= EPSILON && angle3 < 90 )
				cout << "Case #" << i + 1 << ":"
				     << " isosceles acute triangle" << endl;
			else if ( angle2 - angle3 <= EPSILON && angle1 < 90 )
				cout << "Case #" << i + 1 << ":"
				     << " isosceles acute triangle" << endl;
			else if ( angle3 - angle1 <= EPSILON && angle2 < 90 )
				cout << "Case #" << i + 1 << ":"
				     << " isosceles acute triangle" << endl;
			else if ( angle1 - angle2 <= EPSILON && angle3 > 90 )
				cout << "Case #" << i + 1 << ":"
				     << " isosceles obtuse triangle" << endl;
			else if ( angle2 - angle3 <= EPSILON && angle1 > 90 )
				cout << "Case #" << i + 1 << ":"
				     << " isosceles obtuse triangle" << endl;
			else if ( angle3 - angle1 <= EPSILON && angle2 > 90 )
				cout << "Case #" << i + 1 << ":"
				     << " isosceles obtuse triangle" << endl;
		} else if ( angle1 - 90 < EPSILON && angle2 - 90 < EPSILON && angle3 < 90 )
			cout << "Case #" << i + 1 << ":"
			     << " scalene acute triangle" << endl;
		else if ( angle1 - 90 < EPSILON && angle2 - 90 < EPSILON && angle3 > 90 )
			cout << "Case #" << i + 1 << ":"
			     << " scalene obtuse triangle" << endl;
		else if ( angle2 - 90 < EPSILON && angle3 - 90 < EPSILON && angle1 < 90 )
			cout << "Case #" << i + 1 << ":"
			     << " scalene acute triangle" << endl;
		else if ( angle2 - 90 < EPSILON && angle3 - 90 < EPSILON && angle1 > 90 )
			cout << "Case #" << i + 1 << ":"
			     << " scalene obtuse triangle" << endl;
		else if ( angle1 - 90 < EPSILON && angle3 - 90 < EPSILON && angle2 < 90 )
			cout << "Case #" << i + 1 << ":"
			     << " scalene acute triangle" << endl;
		else if ( angle1 - 90 < EPSILON && angle3 - 90 < EPSILON && angle2 > 90 )
			cout << "Case #" << i + 1 << ":"
			     << " scalene obtuse triangle" << endl;
	}

	return 0;
}
