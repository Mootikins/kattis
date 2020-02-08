#include <bits/stdc++.h>

int main( int argc, const char *argv[] ) {
	std::map<std::pair<char, bool>, int> card_vals;
	card_vals.emplace( std::make_pair( 'A', true ), 11 );
	card_vals.emplace( std::make_pair( 'K', true ), 4 );
	card_vals.emplace( std::make_pair( 'Q', true ), 3 );
	card_vals.emplace( std::make_pair( 'J', true ), 20 );
	card_vals.emplace( std::make_pair( 'T', true ), 10 );
	card_vals.emplace( std::make_pair( '9', true ), 14 );
	card_vals.emplace( std::make_pair( '8', true ), 0 );
	card_vals.emplace( std::make_pair( '7', true ), 0 );
	card_vals.emplace( std::make_pair( 'A', false ), 11 );
	card_vals.emplace( std::make_pair( 'K', false ), 4 );
	card_vals.emplace( std::make_pair( 'Q', false ), 3 );
	card_vals.emplace( std::make_pair( 'J', false ), 2 );
	card_vals.emplace( std::make_pair( 'T', false ), 10 );
	card_vals.emplace( std::make_pair( '9', false ), 0 );
	card_vals.emplace( std::make_pair( '8', false ), 0 );
	card_vals.emplace( std::make_pair( '7', false ), 0 );

	int hands;
	char dom_suit;
	std::cin >> hands >> dom_suit;
	int sum = 0;
	for ( int hand = 0; hand < 4 * hands; hand++ ) {
		char suit, number;
		std::cin >> number >> suit;
		sum += card_vals[std::make_pair( number, suit == dom_suit )];
	}

	std::cout << sum;

	return 0;
}
