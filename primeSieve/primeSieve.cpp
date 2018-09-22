#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

long long int sieve(long long int n, vector<bool> & primes){
    primes[0] = primes[1] = false;
    int count = 0, m = sqrt(n);
    for (int i = 2; i <= m; ++i) {
        if (primes[i]) {
            count++;
            for (int k = 2*i; k <= n;k+=i) {
                primes[k] = false;
            }
        }
    }
    for (int i = m+1; i <= n; ++i) {
        if (primes[i]) {
            count++;
        }
    }
    return count;
}

int main(int argc, char *argv[])
{
    vector<bool> primes(100000001, true);
    long long int max, check;
    int lines;

    cin >> max >> lines;

    cout << sieve(max, primes) << endl;

    for (int i = 0; i < lines; ++i) {
        cin >> check;
        cout << primes[check] << endl;
    }
    return 0;
}
