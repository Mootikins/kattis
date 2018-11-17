#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main ( int argc, char* argv[] )
{
	vector<string> deck;
	int p = 13;
	int k = 13;
	int h = 13;
	int t = 13;
	char curr;
	int i = 0;
	int j;
	string currCard;

	while ( cin >> curr ) {
		switch ( i ) {
		case 0:
			switch ( curr ) {
			case 'P':
				p--;
				break;

			case 'K':
				k--;
				break;

			case 'H':
				h--;
				break;

			case 'T':
				t--;
				break;
			}

			currCard.push_back ( curr );

		case 1:
			currCard.push_back ( curr );
			break;

		case 2:
			currCard.push_back ( curr );
			deck.push_back ( currCard );
			currCard.clear();
			break;
		}

		if ( i < 2 )
			i++;
		else
			i = 0;
	}

	for ( i = 0; i < deck.size(); ++i ) {
		for ( j = i + 1; j < deck.size(); ++j ) {
			if ( deck.at ( i ) == deck.at ( j ) ) {
				cout << "GRESKA";
				return 0;
			}
		}
	}

	cout << p << " " << k << " " << h << " " << t;

	return 0;
}
