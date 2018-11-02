#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main ( int argc, char* argv[] )
{
	int instr, r0, r1;
	string currInstr;

	while ( cin >> instr ) {
		if ( instr == 0 )
			return 0;

		int bits[32] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
		                 -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1
		               };

		for ( int i = 0; i < instr; ++i ) {
			cin >> currInstr;

			if ( currInstr == "CLEAR" ) {
				cin >> r0;
				bits[r0] = 0;
			}
			else if ( currInstr == "SET" ) {
				cin >> r0;
				bits[r0] = 1;
			}
			else if ( currInstr == "OR" ) {
				cin >> r0 >> r1;

				if ( bits[r0] == 1 || bits[r1] == 1 )
					bits[r0] = 1;
				else if ( bits[r0] == -1 || bits[r1] == -1 )
					bits[r0] = -1;
				else
					bits[r0] = 0;
			}
			else if ( currInstr == "AND" ) {
				cin >> r0 >> r1;

				if ( bits[r0] == 0 || bits[r1] == 0 )
					bits[r0] = 0;
				else if ( bits[r0] == 1 && bits[r1] == 1 )
					bits[r0] == 1;
				else if ( bits[r0] == 1 && bits[r1] == -1
				          || bits[r1] == 1 && bits[r0] == -1 )
					bits[r0] = -1;
			}
		}

		for ( int i = 31; i >= 0; --i ) {
			if ( bits[i] == -1 )
				cout << "?";
			else
				cout << bits[i];
		}

		cout << endl;
	}

	return 0;
}
