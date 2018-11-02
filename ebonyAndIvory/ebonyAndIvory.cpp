#include <bits/stdc++.h>

using namespace std;

int main()
{
	int ww, wb, bw, bb, songLen, diff;
	int f1, f2;
	cin >> ww>>wb>>bw>>bb>>songLen;

	vector<map<pair<pair<int, int>, int>, int>> ergo ( 4 );


	for ( int j = 0; j < 4; j++ ) {
		if ( j == 1 )
			ww = wb;
		else if ( j==2 )
			ww = bw;
		else if ( j==3 )
			ww = bb;

		for ( int i = 0; i < ww; i++ ) {
			cin >> f1 >> f2;

			for ( int k = 0; k < 14; k++ ) {
				cin >> diff;

				ergo[j][make_pair ( make_pair ( f1,f2 ), i+1 )] = diff;
			}
		}
	}

	vector<pair<int,int>> song ( songLen );

	int note, note2;
	cin >> note;

	for ( int i = 1; i < songLen; i++ ) {
		cin >> note2;
		int temp = 0;

		if ( note %12 == 0 && note %12 == 2 && note %12 == 5 && note %12 == 7 && note %12 == 10 )
			temp = 2;

		if ( note2 %12 == 0 && note2 %12 == 2 && note2 %12 == 5 && note2 %12 == 7 && note2 %12 == 10 )
			temp++;

		if ( note != note2 ) {
			song[i].second = temp;
			song[i].first = note - note2;

			if ( note % 12 + 1 < 4 && note2 % 12 + 1 >= 4 || note2 % 12 + 1 < 4 && note % 12 + 1 >= 4 ) {
				if ( song[i].first < 0 )
					song[i].first--;
				else
					song[i].first++;
			}

			if ( note % 12 + 1 < 9 && note2 % 12 + 1 >= 9 || note2 % 12 + 1 < 9 && note % 12 + 1 >= 9 ) {
				if ( song[i].first < 0 )
					song[i].first--;
				else
					song[i].first++;
			}
		}
		else {
			i--;
			songLen--;
		}

		note = note2;
	}

	vector<array<array<int,5>,5>> memo;

	for ( int i = 0; i < songLen; i++ ) {

	}



}
