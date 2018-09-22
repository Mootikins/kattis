#include <iostream>

using namespace std;

int main()
{
    int currGnome, groups, noInCurrGroup;
    int currGroup[1000];

    cin >> groups;

    for (int i = 0; i < groups; i++) {
        cin >> noInCurrGroup;
        for (int j = 0; j < noInCurrGroup; j++) {
           cin >> currGroup[j]; 
           if (currGroup[j-1] > currGroup[j]) {
              cout << j << endl; 
           }
        }
    }
    return 0;
}
