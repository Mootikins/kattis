#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
	int colleagues;
	std::cin >> colleagues;
	std::unordered_map<std::string, int> categories;
	std::string current_category;

	for (int colleague = 0; colleague < colleagues; ++colleague) {
		std::cin >> current_category;
		if ( categories.find( current_category ) == categories.end() ) {
			categories.emplace( current_category, 1 );
		}
		else {
			categories.at( current_category )++;
		}
	}

	int min_category = 1000;
	std::set<std::string> best_categories;
	for ( auto category : categories ) {
		if ( category.second < min_category ) {
			best_categories.clear();
			min_category = category.second;
			best_categories.insert( category.first );
		}
		else if ( category.second == min_category ) {
			best_categories.insert ( category.first );
		}
	}

	for (auto category : best_categories) {
		std::cout << category << std::endl;
	}

	return 0;
}
