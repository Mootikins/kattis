#include <bits/stdc++.h>

int main(){
	int cases;
	std::cin >> cases;

	for(int i = 0; i < cases; i++){
		int num;
		std::cin >> num;
		std::cout << num << " is ";
		if ( num % 2 == 0)
			std::cout << "even" << std::endl;
		else
			std::cout << "odd" << std::endl;
	}

	return 0;
}
