#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main( int argc, char* argv[] ) {
	vector<string> words;
	string currWord;
	set<string> combinations;

	while ( cin >> currWord ) words.push_back( currWord );

	for ( int i = 0; i < words.size(); ++i ) {
		for ( int j = i + 1; j < words.size(); ++j ) {
			combinations.insert( words[i] + words[j] );
			combinations.insert( words[j] + words[i] );
		}
	}

	for ( auto it : combinations ) cout << it << endl;

	return 0;
}
