#include <iostream>
#include <cmath>

using namespace std;

int main ( int argc, char* argv[] )
{
	int pub, impact;

	cin >> pub >> impact;

	if ( pub > 1 )
		cout << ( impact - 1 ) * pub + 1;
	else
		cout << pub* impact;

	return 0;
}
