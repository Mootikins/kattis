#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    char move;
    vector<int> cups = {1, 0, 0};

    while(cin >> move){
        switch (move) {
            case 'A':
                swap(cups[0], cups[1]);
                break;
            case 'B':
                swap(cups[1], cups[2]);
                break;
            case 'C':
                swap(cups[0], cups[2]);
                break;
        }
    }

    for (int i = 0; i < cups.size(); ++i) {
        if (cups.at(i)) {
            cout << i + 1;
        }
    }
    
    return 0;
}
