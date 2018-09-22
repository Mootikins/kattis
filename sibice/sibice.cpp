#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    int matches, width, height, match;

    cin >> matches >> width >> height;

    while(cin >> match){
        if (match <= sqrt(pow(width,2) + pow(height,2))) {
            cout << "DA" << endl;
        }
        else {
            cout << "NE" << endl;
        }
    }
    return 0;
}
