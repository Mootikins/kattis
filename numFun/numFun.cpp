#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int cases, no1, no2, no3;

    cin >> cases;

    for (int i = 0; i < cases; ++i) {
        cin >> no1;
        cin >> no2;
        cin >> no3;
        if (no1 - no2 == no3 || no2 - no1 == no3) {
            cout << "Possible" << endl;
        }
        else if (no1 + no2 == no3) {
            cout << "Possible" << endl;
        }
        else if (double(no1) / no2 == no3 || double(no2) / no1 == no3) {
            cout << "Possible" << endl;
        }
        else if (no1 * no2 == no3) {
            cout << "Possible" << endl;
        }
        else if (i == cases - 1) {
            cout << "Impossible";
        }
        else {
            cout << "Impossible" << endl;
        }
    }
    return 0;
}
