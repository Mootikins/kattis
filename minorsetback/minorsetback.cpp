#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
	map<int, set<string>> pitches;
	map<string, set<string>> keys;

	keys["G major"] = {"G", "A", "B", "C", "D", "E", "F#"};
	keys["C major"] = {"C", "D", "E", "F", "G", "A", "B"};
	keys["Eb major"] = {"Eb", "F", "G", "Ab", "Bb", "C", "D"};
	keys["F# minor"] = {"F#" , "G#", "A", "B", "C#", "D", "E"};
	keys["G minor"] = {"G", "A", "Bb", "C", "D", "Eb", "F"};

	pitches[0]  = {"A"};
	pitches[1] = {"A#", "Bb"};
	pitches[2]  = {"B"};
	pitches[3]  = {"C"};
	pitches[4] = {"C#", "Db"};
	pitches[5] = {"D"};
	pitches[6]  = {"D#", "Eb"};
	pitches[7] = {"E"};
	pitches[8] = {"F"};
	pitches[9]  = {"F#", "Gb"};
	pitches[10]  = {"G"};
	pitches[11] = {"G#", "Ab"};

	vector<set<string>> song;
	int numNotes;
	long double currNote;

	cin >> numNotes;

	for (int i = 0; i < numNotes; ++i) {
		cin >> currNote;
		currNote *= 512;
		currNote /= 440;
		//cout << currNote << ", ";
		currNote = 12 * log2(currNote);
		//cout << currNote << ", ";
		int a = (long long) round(currNote) % 12;
		song.push_back(pitches[a]);
		//cout << a << ", ";
		//for (auto i : pitches[a]) {
			//cout << i << " ";
		//}
		//cout << endl;
	}

	int count = 0;
	string strOut;
	for (auto it1 : keys) {
		bool keyFound = true;
		for (auto it2 : song) {
			bool found = false;
			for (auto it3 : it2)
				if (it1.second.count(it3) == 1)
					found = true;
			if (found == false)
				keyFound = false;
		}
		if (keyFound == true) {
			count++;
			strOut = it1.first;
		}
	}
	if (count != 1) {
		cout << "cannot determine key" << endl;
		return 0;
	}

	cout << strOut << endl;
	for (auto i1 : song)
		for (auto i2 : i1)
			if (keys[strOut].count(i2) == 1)
				cout << i2 << endl;

	return 0;
}
