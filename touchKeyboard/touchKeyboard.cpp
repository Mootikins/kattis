#include <iostream>
#include <algorithm>
#include <map>
#include <utility>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

bool distComp( pair<string, int> &a, pair<string, int> &b) {
    return (a.second < b.second);
}

int main(int argc, char *argv[])
{
    int cases, dictSize, wordDist;
    map<char, pair<int,int>> keeb;
    map<char, pair<int,int>>::iterator it1, it2;
    vector<pair<string,int>> wordDists;

    vector<string> inputKeeb;

    string typed, currDict;
    vector<string> dict;
    
    inputKeeb.push_back("qwertyuiop");
    inputKeeb.push_back("asdfghjkl");
    inputKeeb.push_back("zxcvbnm");

    for (int i = 0; i < inputKeeb.size(); ++i) {
        for (int j = 0; j < inputKeeb.at(i).size(); ++j) {
            keeb.insert(pair<char,pair<int,int>>(inputKeeb.at(i).at(j),pair<int,int>(i,j)));
        }
    }

    cin >> cases;

    for (int i = 0; i < cases; ++i) {
        currDict.clear();
        cin >> typed >> dictSize;
        for (int j = 0; j < dictSize; ++j) {
            cin >> currDict;
            dict.push_back(currDict);
        }
        for (int j = 0; j < dictSize; ++j) {
            wordDist = 0;
            for (int k = 0; k < typed.length(); ++k) {
                it1 = keeb.find(typed.at(k));
                it2 = keeb.find(dict.at(j).at(k));
                wordDist += abs(it1->first - it2->first);
            }
            wordDists.push_back(pair<string,int>(dict.at(i),wordDist));
        }
        sort(wordDists.begin(), wordDists.end(), distComp);
        for (int j = 0; j < wordDists.size(); ++j) {
            cout << wordDists.at(j).first << " " << wordDists.at(j).second << endl;
        }
    }

    return 0;
}
