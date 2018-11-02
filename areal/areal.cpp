#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

int main ( int argc, char* argv[] )
{
	long double area;

	cin >> area;

	long double result = pow ( ( long double ) area, ( long double ) 1/2 ) * 4;

	cout << setprecision ( 30 ) << result;
	return 0;
}
