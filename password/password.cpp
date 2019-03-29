#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char *argv[])
{
	int size;
	cin >> size;

	vector<double> passwords;

	for (int i = 0; i < size; i++) {
		string junk;
		double probability;

		cin >> junk >> probability;

		passwords.push_back( probability );
	}

	sort(passwords.begin(), passwords.end(), greater<double>());

	double probability = 0;

	for (int i = 0; i < passwords.size(); i++) {
		probability += ( i + 1 ) * passwords[i];
	}

	cout << fixed << probability;

	return 0;
}
