#include <bits/stdc++.h>

using namespace std;

int main() {
	string word, speech, result;
	vector<int> stream;

	while ( cin >> word ) {
		bool is_umm = true;
		for ( int i = 0; i < word.length() && is_umm; i++ ) {
			if ( ( word[i] != 'u' && word[i] != 'm' ) ) {
				if ( isalpha( word[i] ) || isdigit( word[i] ) ) {
					is_umm = false;
				}
			}
		}
		for ( int i = 0; i < word.length() && is_umm; i++ ) {
			if ( word[i] == 'u' ) {
				stream.push_back( 1 );
			} else if ( word[i] == 'm' ) {
				stream.push_back( 0 );
			}
			if ( stream.size() == 7 ) {
				int val = 0;
				for ( int j = stream.size() - 1; j >= 0; j-- ) {
					val += pow( 2, stream.size() - j - 1 ) * stream[j];
				}
				result += (char)val;
				stream.clear();
			}
		}
	}
	cout << result << endl;
	return 0;
}
