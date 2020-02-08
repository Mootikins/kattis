#include <bits/stdc++.h>

int main( int argc, char *argv[] ) {
	int chars, weight;
	std::string word;

	std::cin >> chars >> weight;

	if ( chars * 26 < weight || chars > weight ) {
		std::cout << "impossible";
	} else {
		std::string word;
		while ( word.length() < chars ) {
			if ( weight - 26 > chars - word.length() ) {
				weight -= 26;
				word.push_back( 'z' );
			} else if ( chars - word.length() == weight ) {
				weight -= 1;
				word.push_back( 'a' );
			} else {
				char insertedChar = weight - ( chars - word.length() ) + 'a' - 1;
				weight -= insertedChar - 'a' + 1;
				word.push_back( insertedChar );
			}
		}
		std::cout << word;
	}

	return 0;
}
