#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char *argv[])
{
	int n, k;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> k;
		bool pea = false, pan = false;
		string restName;
		cin.ignore();
		getline(cin, restName);
		for (int item = 0; item < k; item++) {
			string menuItem;
			getline(cin, menuItem);
			if (menuItem == "pea soup") {
				pea = true;
			}
			else if (menuItem == "pancakes") {
				pan = true;
			}

			if (pea && pan) {
				cout << restName;
				return 0;
			}
		}
	}
	cout << "Anywhere is fine I guess";

	return 0;
}
