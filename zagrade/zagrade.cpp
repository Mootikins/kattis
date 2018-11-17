#include <vector>
#include <string>
#include <iostream>
#include <stack>
#include <set>
#include <cmath>

using namespace std;
int main ( int argc, char* argv[] )
{
	string expr;
	string currExpr;
	stack< vector<int> > parens;
	vector< vector<int> > finParen;
	set<string> finExpr;
	vector<bool> areUsed;
	vector<int> temp;
	short int used = 1;
	short int filter = 1;

	cin >> expr;

	for ( int i = 0; i < expr.length(); ++i ) {
		if ( expr.at ( i ) == '(' ) {
			temp.clear();
			temp.push_back ( i );
			parens.push ( temp );
		}
		else if ( expr.at ( i ) == ')' ) {
			parens.top().push_back ( i );
			finParen.push_back ( parens.top() );
			parens.pop();
		}
	}

	areUsed.resize ( finParen.size() );

	for ( int i = 1; i < pow ( 2,finParen.size() ); ++i ) {
		filter = i;
		currExpr = expr;

		for ( int k = 0; k < areUsed.size(); ++k ) {
			if ( filter & ( 1 << k ) )
				areUsed.at ( k ) = true;
			else
				areUsed.at ( k ) = false;
		}

		for ( int k = 0; k < finParen.size(); ++k ) {
			if ( areUsed.at ( k ) ) {
				currExpr.at ( finParen.at ( k ).at ( 0 ) ) = ' ';
				currExpr.at ( finParen.at ( k ).at ( 1 ) ) = ' ';
			}
		}

		for ( int k = 0; k < currExpr.length(); ++k ) {
			if ( currExpr.at ( k ) == ' ' ) {
				currExpr.erase ( k,1 );
				k--;
			}
		}

		finExpr.insert ( currExpr );
	}

	for ( string str:finExpr )
		cout << str << endl;

	return 0;
}
