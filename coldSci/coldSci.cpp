#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int temp, noTemps;
    int neg = 0;

    cin >> noTemps;

    for (int i = 0; i < noTemps; ++i) {
        cin >> temp;
        if (temp < 0) {
            neg++;
        }
    }
    
    cout << neg;
    return 0;
}
