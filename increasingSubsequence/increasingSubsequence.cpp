#include <bits/stdc++.h>

using namespace std;

vector<int> LIS(vector<int> &arr) {
	vector<int> longest(arr.size(), 0);
	multiset<int> seq;
	vector<int> prev (arr.size(), -1);
	for (int i = 0; i < arr.size(); ++i) {
		auto it = seq.lower_bound(arr[i]);
		if ( it != seq.begin() ) {
			it--;
			if (it != seq.end()) prev[i] = *it;
			else if (seq.size() != 0) prev[i] = *seq.rbegin();
			if ( it != seq.end() )
				it++;
		}
		if (it != seq.end()) {
			seq.erase(it);
		}
		seq.insert(arr[i]);
		longest[i] = seq.size();
	}
	vector<int> madeSeq;
	int value = *seq.rbegin();
	for (int i = arr.size() - 1; i > -1; --i) {
		if (arr[i] == value) {
			madeSeq.push_back(value);
			value = prev[i];
		}
	}
	reverse(madeSeq.begin(), madeSeq.end());
	cout << madeSeq.size() << " ";
	for (auto i : madeSeq) {
		cout << i << " ";
	}
	return longest;
}

int main(int argc, char *argv[])
{
	int nums, currNum;

	while (cin >> nums) {
		vector<int> seq;
		if (nums != 0) {
			for (int i = 0; i < nums; ++i) {
				cin >> currNum;
				seq.push_back(currNum);
			}
		}
		else
			break;
		vector<int> MIS = LIS(seq);
		int count = 1;
		cout << endl;
	}
}
