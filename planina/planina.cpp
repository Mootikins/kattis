#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int iter;
	int nodes;
	cin >> iter;
	nodes = pow ( pow ( 2,iter ) + 1,2 );
	cout << nodes;
	return 0;
}

