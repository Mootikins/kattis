#include <iostream>

using namespace std;

int main( int argc, char* argv[] ) {
	int junc, switches;

	cin >> junc >> switches;

	if ( switches % 2 == 0 )
		cout << "possible";
	else
		cout << "impossible";

	return 0;
}
