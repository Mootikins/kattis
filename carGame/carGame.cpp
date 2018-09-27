#include <cctype>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
  ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int words, noPlates,letter;
  bool done;
  cin >> words >> noPlates;
  vector<string> dict(words);
  string plate;

  for (int i = 0; i < words; ++i) {
    cin >> dict.at(i);
  }

  for (int i = 0; i < noPlates; ++i) {
    cin >> plate;
    done = false;
    for (int word = 0;!done && word < dict.size(); ++word) {
      letter = 0;
      for (int k = 0; k < dict.at(word).length() && !done; ++k) {
        if (plate.at(letter) == char(toupper(dict.at(word).at(k)))) {
          letter++;
        }
        if (letter == 3) {
          cout << dict.at(word);
          cout << endl;
          done = true;
        }
        else if (k == dict.at(word).length() - 1 && word == dict.size() - 1 ) {
          cout << "No valid word" << endl;
          done = true;
        }
      }
    }
  }

  return 0;
}
