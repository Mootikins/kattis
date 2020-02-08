#include <bits/stdc++.h>

int main( int argc, const char *argv[] ) {
	int div1, div2, upperBound;
	std::cin >> div1 >> div2 >> upperBound;

	for ( int i = 1; i <= upperBound; i++ ) {
		std::string output;
		if ( !( i % div1 ) ) {
			output += "Fizz";
		}
		if ( !( i % div2 ) ) {
			output += "Buzz";
		}
		if ( output.empty() ) {
			std::cout << i << std::endl;
		} else {
			std::cout << output << std::endl;
		}
	}

	return 0;
}
