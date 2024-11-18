#include <bits/stdc++.h>
using namespace std;

void printEvenAndOdd(const vector<int>& arr) {
    cout << "Even numbers: ";
    for (int num : arr) {
        if (num % 2 == 0) {
            cout << num << " ";
        }
    }
    cout << endl;

    cout << "Odd numbers: ";
    for (int num : arr) {
        if (num % 2 != 0) {
            cout << num << " ";
        }
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printEvenAndOdd(arr);
    return 0;
}