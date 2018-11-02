#include <iostream>
#include <vector>
#include <stack>

using namespace std;

struct node {
	int num;
	vector<int> deps;
	bool temp=false, perm=false;
};

void visit ( node &n, vector<node> &dag, vector<int> &list, vector<bool> &marked )
{
	if ( n.perm )
		return;

	if ( n.temp ) {
		n.deps.clear();
		n.deps.push_back ( -1 );
	}

	n.temp = true;

	for ( auto paren : n.deps )
		visit ( dag[paren + 1], dag, list, marked );

	n.perm = true;
	marked[n.num - 1] = true;
	list.push_back ( n.num );
}


int main ( int argc, char* argv[] )
{
	int sticks, crosses, st1, st2;
	cin >> sticks >> crosses;
	vector<node> dag ( sticks );
	vector<bool> marked ( sticks, false );

	for ( int i = 0; i < sticks; ++i )
		dag[i].num = i + 1;

	for ( int i = 0; i < crosses; ++i ) {
		cin >> st1 >> st2;
		dag[st2 - 1].deps.push_back ( st1 );
	}


	return 0;
}
