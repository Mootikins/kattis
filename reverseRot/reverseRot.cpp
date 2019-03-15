#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
	std::string set = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";
	int rotate;
	while ( std::cin >> rotate && rotate != 0 ) {
		std::string pre;
		std::cin >> pre;
		for (int i = pre.length() - 1; i >= 0; --i) {
			std::cout << set.at( (set.find ( pre.at( i ) ) + rotate) % 28 );
		}
		std::cout << std::endl;
	}
	return 0;
}
