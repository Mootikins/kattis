#include <iostream>

using namespace std;

int main( int argc, char* argv[] ) {
	int cases, num1, num2;

	cin >> cases;

	for ( int i = 0; i < cases; ++i ) {
		cin >> num1;
		cout << num1 - 1 << endl;
		cin >> num1;

		for ( int j = 0; j < num1; ++j ) cin >> num2 >> num2;
	}

	return 0;
}
