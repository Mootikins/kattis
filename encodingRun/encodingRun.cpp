#include <bits/stdc++.h>

using namespace std;

int main ( int argc, char* argv[] )
{
	char coding;
	cin >> coding;
	string str;
	cin >> str;

	if ( coding == 'E' ) {
		int count = 1;

		for ( int i = 1; i < str.length(); ++i ) {
			if ( str[i] != str[i-1] ) {
				cout << str[i-1] << count;
				count = 1;
			}
			else
				count++;
		}

		cout << str[str.length()-1] << count;
		cout << endl;
	}
	else {
		for ( int i = 0; i < str.length(); i+=2 ) {
			for ( int j = 0; j < str[i+1]-'0'; j++ )
				cout << str[i];
		}

		cout << endl;
	}

	return 0;
}
