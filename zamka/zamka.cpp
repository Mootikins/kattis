#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int l,d,n,m,x;

    cin >> l >> d >> x;
    bool found;

    for (int i = l; i <= d && !found; ++i) {
        found = false;
        int num = i, sum = 0;
        while ( num > 0 )
        {
            sum += num % 10;
            num /= 10;
        }
        if (sum == x) {
            cout << i << endl;
            found = true;
        }
    }
    found = false;
    for (int i = d; i >= l && !found; i--) {
        found = false;
        int num = i, sum = 0;
        while ( num > 0 )
        {
            sum += num % 10;
            num /= 10;
        }
        if (sum == x) {
            cout << i;
            found = true;
        }
    }
    return 0;
}
