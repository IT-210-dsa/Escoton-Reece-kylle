#include <iostream>
using namespace std;

int main() {
    int numbers[5];

    // Input 5 numbers
    cout << "Enter 5 numbers:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Display original numbers
    cout << "\nOriginal:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }

    // Insertion Sort
    for (int i = 1; i < 5; i++) {
        int key = numbers[i];
        int j = i - 1;

        while (j >= 0 && numbers[j] > key) {
            numbers[j + 1] = numbers[j];
            j--;
        }

        numbers[j + 1] = key;
    }

    // Display sorted numbers
    cout << "\n\nSorted:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }

    cout << endl;

    return 0;
}