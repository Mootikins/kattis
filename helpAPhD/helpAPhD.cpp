#include <iostream>
#include <string>

using namespace std;
int main( int argc, char* argv[] ) {
	int cases, num1, num2;
	string prob, currNum;
	bool first = true;

	cin >> cases;

	for ( int i = 0; i < cases; ++i ) {
		cin >> prob;

		if ( prob == "P=NP" )
			cout << "skipped" << endl;
		else {
			for ( int j = 0; j < prob.length(); ++j ) {
				if ( prob.at( j ) == '+' && first ) num1 = atoi( currNum.c_str() );
			}
		}
	}

	return 0;
}
