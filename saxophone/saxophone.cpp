#include <bits/stdc++.h>

using namespace std;

int main( int argc, char *argv[] ) {
	bool c[] = {false, true, true, true, false, false, true, true, true, true};

	bool d[] = {false, true, true, true, false, false, true, true, true, false};

	bool e[] = {false, true, true, true, false, false, true, true, false, false};

	bool f[] = {false, true, true, true, false, false, true, false, false, false};

	bool g[] = {false, true,  true,  true,  false,
	            false, false, false, false, false};

	bool a[] = {false, true,  true,  false, false,
	            false, false, false, false, false};

	bool b[] = {false, true,  false, false, false,
	            false, false, false, false, false};

	bool C[] = {false, false, true,  false, false,
	            false, false, false, false, false};

	bool D[] = {true, true, true, true, false, false, true, true, true, false};

	bool E[] = {true, true, true, true, false, false, true, true, false, false};

	bool F[] = {true, true, true, true, false, false, true, false, false, false};

	bool G[] = {true, true, true, true, false, false, false, false, false, false};

	bool A[] = {true,  true,  true,  false, false,
	            false, false, false, false, false};

	bool B[] = {true,  true,  false, false, false,
	            false, false, false, false, false};

	int cases;

	cin >> cases;
	cin.ignore();

	for ( int i = 0; i < cases; ++i ) {
		vector<int> presses( 10, 0 );
		string notes;

		bool fingStates[] = {false, false, false, false, false,
		                     false, false, false, false, false};

		getline( cin, notes );

		for ( int j = 0; j < notes.length(); ++j ) {
			switch ( notes[j] ) {
				case 'c':
					for ( int k = 0; k < 10; ++k ) {
						if ( c[k] && !fingStates[k] ) {
							presses[k]++;
							fingStates[k] = true;
						} else if ( !c[k] && fingStates[k] ) {
							fingStates[k] = false;
						}
					}
					break;

				case 'd':
					for ( int k = 0; k < 10; ++k ) {
						if ( d[k] && !fingStates[k] ) {
							presses[k]++;
							fingStates[k] = true;
						} else if ( !d[k] && fingStates[k] ) {
							fingStates[k] = false;
						}
					}
					break;

				case 'e':
					for ( int k = 0; k < 10; ++k ) {
						if ( e[k] && !fingStates[k] ) {
							presses[k]++;
							fingStates[k] = true;
						} else if ( !e[k] && fingStates[k] ) {
							fingStates[k] = false;
						}
					}
					break;

				case 'f':
					for ( int k = 0; k < 10; ++k ) {
						if ( f[k] && !fingStates[k] ) {
							presses[k]++;
							fingStates[k] = true;
						} else if ( !f[k] && fingStates[k] ) {
							fingStates[k] = false;
						}
					}
					break;

				case 'g':
					for ( int k = 0; k < 10; ++k ) {
						if ( g[k] && !fingStates[k] ) {
							presses[k]++;
							fingStates[k] = true;
						} else if ( !g[k] && fingStates[k] ) {
							fingStates[k] = false;
						}
					}
					break;

				case 'a':
					for ( int k = 0; k < 10; ++k ) {
						if ( a[k] && !fingStates[k] ) {
							presses[k]++;
							fingStates[k] = true;
						} else if ( !a[k] && fingStates[k] ) {
							fingStates[k] = false;
						}
					}
					break;

				case 'b':
					for ( int k = 0; k < 10; ++k ) {
						if ( b[k] && !fingStates[k] ) {
							presses[k]++;
							fingStates[k] = true;
						} else if ( !b[k] && fingStates[k] ) {
							fingStates[k] = false;
						}
					}
					break;

				case 'C':
					for ( int k = 0; k < 10; ++k ) {
						if ( C[k] && !fingStates[k] ) {
							presses[k]++;
							fingStates[k] = true;
						} else if ( !C[k] && fingStates[k] ) {
							fingStates[k] = false;
						}
					}
					break;

				case 'D':
					for ( int k = 0; k < 10; ++k ) {
						if ( D[k] && !fingStates[k] ) {
							presses[k]++;
							fingStates[k] = true;
						} else if ( !D[k] && fingStates[k] ) {
							fingStates[k] = false;
						}
					}
					break;

				case 'E':
					for ( int k = 0; k < 10; ++k ) {
						if ( E[k] && !fingStates[k] ) {
							presses[k]++;
							fingStates[k] = true;
						} else if ( !E[k] && fingStates[k] ) {
							fingStates[k] = false;
						}
					}
					break;

				case 'F':
					for ( int k = 0; k < 10; ++k ) {
						if ( F[k] && !fingStates[k] ) {
							presses[k]++;
							fingStates[k] = true;
						} else if ( !F[k] && fingStates[k] ) {
							fingStates[k] = false;
						}
					}
					break;

				case 'G':
					for ( int k = 0; k < 10; ++k ) {
						if ( G[k] && !fingStates[k] ) {
							presses[k]++;
							fingStates[k] = true;
						} else if ( !G[k] && fingStates[k] ) {
							fingStates[k] = false;
						}
					}
					break;

				case 'A':
					for ( int k = 0; k < 10; ++k ) {
						if ( A[k] && !fingStates[k] ) {
							presses[k]++;
							fingStates[k] = true;
						} else if ( !A[k] && fingStates[k] ) {
							fingStates[k] = false;
						}
					}
					break;

				case 'B':
					for ( int k = 0; k < 10; ++k ) {
						if ( B[k] && !fingStates[k] ) {
							presses[k]++;
							fingStates[k] = true;
						} else if ( !B[k] && fingStates[k] ) {
							fingStates[k] = false;
						}
					}
					break;

				default:
					break;
			}
		}

		for ( int k = 0; k < presses.size() - 1; ++k ) {
			cout << presses[k] << ' ';
		}
		cout << presses[presses.size() - 1] << endl;
	}

	return 0;
}
