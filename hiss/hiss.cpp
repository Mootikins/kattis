#include <iostream>
#include <string>

using namespace std;

int main ( int argc, char* argv[] )
{
	string word;

	cin >> word;

	for ( int i = 0; i < word.length() - 1; ++i ) {
		if ( word.at ( i ) == 's' && word.at ( i+1 ) == 's' ) {
			cout << "hiss";
			return 0;
		}
	}

	cout << "no hiss";
	return 0;
}
