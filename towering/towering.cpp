#include <bits/stdc++.h>
using namespace std;

int main( int argc, const char *argv[] ) {
	vector<int> boxes;
	int curr_box, height1, height2;
	for ( int i = 0; i < 6; i++ ) {
		cin >> curr_box;
		boxes.push_back( curr_box );
	}

	cin >> height1 >> height2;
	sort( boxes.begin(), boxes.end() );

	while ( next_permutation( boxes.begin(), boxes.end() ) ) {
		if ( boxes[0] + boxes[1] + boxes[2] == height1 &&
		     boxes[3] + boxes[4] + boxes[5] == height2 ) {
			vector<int> tower1 = {boxes[0], boxes[1], boxes[2]};
			vector<int> tower2 = {boxes[3], boxes[4], boxes[5]};

			sort( tower1.rbegin(), tower1.rend() );
			sort( tower2.rbegin(), tower2.rend() );

			cout << tower1[0] << " " << tower1[1] << " " << tower1[2] << " ";
			cout << tower2[0] << " " << tower2[1] << " " << tower2[2] << endl;
			break;
		}
	}

	return 0;
}
