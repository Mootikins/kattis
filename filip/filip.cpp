#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main ( int argc, char* argv[] )
{
	string str1, str2;
	string::iterator it1;
	string::iterator it2;

	cin >> str1 >> str2;

	it1 = str1.begin();
	it2 = str1.end();
	reverse ( it1,it2 );
	it1 = str2.begin();
	it2 = str2.end();
	reverse ( it1,it2 );

	int num1 = atoi ( str1.c_str() );
	int num2 = atoi ( str2.c_str() );

	cout << ( ( num1 < num2 ) ? num2 : num1 );
	return 0;
}
