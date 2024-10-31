#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool isPrime[n + 1];
    for (int i = 0; i <= n; i++){
        isPrime[i] = true;
    }
    isPrime[0] = isPrime[1] = false;

    // Sieve of Eratosthenes to mark non-prime numbers
    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    // Step 2: Find two composite numbers whose sum is n
    for (int x = 4; x < n; x++) {
        // Check if x and n - x are both composite
        if (!isPrime[x] && !isPrime[n - x]) {
            cout << x << " " << n - x << endl;
            break;
        }
    }

    return 0;
}

