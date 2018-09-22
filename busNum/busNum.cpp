#include <algorithm>
#include <iostream>
#include <vector>

int main(int argc, char *argv[])
{
    vector<int> buses;
    int numBuses;
    int currBus;

    cin >> numBuses;

    for (int i = 0; i < numBuses; ++i) {
        cin >> currBus;
        buses.push_back(currBus);
    }
    return 0;
}
