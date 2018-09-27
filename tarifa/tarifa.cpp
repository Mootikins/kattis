#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int MB, currMB, mos, currMo;

    cin >> MB >> mos;

    currMB = MB;

    for (int i = 0; i < mos; ++i) {
        cin >> currMo;
        currMB -= currMo - MB;
    }

    cout << currMB;
    return 0;
}
