#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}

void processPrimes(const vector<int>& arr) {
    vector<int> primeArray;
    for (int num : arr) {
        if (isPrime(num)) {
            primeArray.push_back(num);
        }
    }

    cout << "Prime numbers: ";
    for (int prime : primeArray) {
        cout << prime << " ";
    }
    cout << endl;

    if (!primeArray.empty()) {
        int maxPrime = *max_element(primeArray.begin(), primeArray.end());
        int minPrime = *min_element(primeArray.begin(), primeArray.end());
        int sumPrimes = accumulate(primeArray.begin(), primeArray.end(), 0);

        cout << "Maximum prime: " << maxPrime << endl;
        cout << "Minimum prime: " << minPrime << endl;
        cout << "Sum of primes: " << sumPrimes << endl;
    } else {
        cout << "No prime numbers found in the array." << endl;
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 13, 17};
    processPrimes(arr);
    return 0;
}