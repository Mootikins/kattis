#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main ( int argc, char* argv[] )
{
	string line;
	vector<string> whiteK, whiteQ, whiteR, whiteB, whiteN, whiteP;
	vector<string> blackK, blackQ, blackR, blackB, blackN, blackP;
	string row, col;

	for ( int i = 8; i > 0; --i ) {
		cin >> line;
		cout << line;

		switch ( i ) {
		case 8:
			row = "8";
			break;

		case 7:
			row = "7";
			break;

		case 6:
			row = "6";
			break;

		case 5:
			row = "5";
			break;

		case 4:
			row = "4";
			break;

		case 3:
			row = "3";
			break;

		case 2:
			row = "2";
			break;

		case 1:
			row = "1";
			break;

		default:
			break;
		}

		cout << i;

		for ( int j = 3; j < 32; j + 4 ) {
			switch ( j ) {
			case 3:
				col = "a";
				break;

			case 7:
				col = "b";
				break;

			case 11:
				col = "c";
				break;

			case 15:
				col = "d";
				break;

			case 19:
				col = "e";
				break;

			case 23:
				col = "f";
				break;

			case 27:
				col = "g";
				break;

			case 31:
				col = "h";
				break;

			default:
				break;
			}

			switch ( line.at ( j ) ) {
			case 'K':
				whiteK.push_back ( "K" + col + row );
				break;

			case 'Q':
				whiteQ.push_back ( "Q" + col + row );
				break;

			case 'R':
				whiteR.push_back ( "R" + col + row );
				break;

			case 'B':
				whiteB.push_back ( "B" + col + row );
				break;

			case 'N':
				whiteN.push_back ( "N" + col + row );
				break;

			case 'P':
				whiteP.push_back ( col + row );
				break;

			case 'k':
				blackK.push_back ( "K" + col + row );
				break;

			case 'q':
				blackQ.push_back ( "Q" + col + row );
				break;

			case 'r':
				blackR.push_back ( "R" + col + row );
				break;

			case 'b':
				blackB.push_back ( "B" + col + row );
				break;

			case 'n':
				blackN.push_back ( "N" + col + row );
				break;

			case 'p':
				blackP.push_back ( col + row );
				break;

			default:
				break;
			}
		}
	}

	cout << "White: ";

	if ( whiteK.size() > 0 ) {
		for ( int i = 0; i < whiteK.size(); ++i ) {
			cout << whiteK.at ( whiteK.size() - i - 1 );
			cout << ", ";
		}
	}

	if ( whiteQ.size() > 0 ) {
		for ( int i = 0; i < whiteQ.size(); ++i ) {
			cout << whiteQ.at ( whiteQ.size()-i - 1 );
			cout << ", ";
		}
	}

	if ( whiteR.size() > 0 ) {
		for ( int i = 0; i < whiteR.size(); ++i ) {
			cout << whiteR.at ( whiteR.size()-i - 1 );
			cout << ", ";
		}
	}

	if ( whiteB.size() > 0 ) {
		for ( int i = 0; i < whiteB.size(); ++i ) {
			cout << whiteB.at ( whiteB.size()-i - 1 );
			cout << ", ";
		}
	}

	if ( whiteN.size() > 0 ) {
		for ( int i = 0; i < whiteN.size(); ++i ) {
			cout << whiteN.at ( whiteN.size()-i - 1 );
			cout << ", ";
		}
	}

	if ( whiteP.size() > 0 ) {
		for ( int i = 0; i < whiteP.size(); ++i ) {
			cout << whiteP.at ( whiteP.size()-i - 1 );

			if ( i == whiteP.size() - 1 )
				cout << endl;
			else
				cout << ", ";
		}
	}

	cout << "Black: ";

	if ( blackK.size() > 0 ) {
		for ( int i = 0; i < blackK.size(); ++i ) {
			cout << whiteK.at ( blackK.size()-i - 1 );
			cout << ", ";
		}
	}

	if ( blackQ.size() > 0 ) {
		for ( int i = 0; i < blackQ.size(); ++i ) {
			cout << whiteQ.at ( blackQ.size()-i - 1 );
			cout << ", ";
		}
	}

	if ( blackR.size() > 0 ) {
		for ( int i = 0; i < blackR.size(); ++i ) {
			cout << whiteR.at ( blackR.size()-i - 1 );
			cout << ", ";
		}
	}

	if ( blackB.size() > 0 ) {
		for ( int i = 0; i < blackB.size(); ++i ) {
			cout << whiteB.at ( blackB.size()-i - 1 );
			cout << ", ";
		}
	}

	if ( blackN.size() > 0 ) {
		for ( int i = 0; i < blackN.size(); ++i ) {
			cout << whiteN.at ( blackN.size()-i - 1 );
			cout << ", ";
		}
	}

	if ( blackP.size() > 0 ) {
		for ( int i = 0; i < blackP.size(); ++i ) {
			cout << whiteP.at ( blackP.size()-i - 1 );

			if ( i == whiteP.size() - 1 ) {
			}
			else
				cout << ", ";
		}
	}

	return 0;
}
