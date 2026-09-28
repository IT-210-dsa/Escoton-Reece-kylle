#include <iostream>
using namespace std;

int main() {
    int values[5];
    int temp;

    cout << "Enter 5 numbers:\n";

    for (int x = 0; x < 5; x++) {
        cout << "Number " << x + 1 << ": ";
        cin >> values[x];
    }

    cout << "\nOriginal Numbers: ";
    for (int x = 0; x < 5; x++) {
        cout << values[x] << " ";
    }

    bool swapped;

    for (int pass = 0; pass < 4; pass++) {
        swapped = false;

        for (int index = 0; index < 4 - pass; index++) {
            if (values[index] > values[index + 1]) {
                temp = values[index];
                values[index] = values[index + 1];
                values[index + 1] = temp;
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }

    cout << "\nSorted Numbers: ";
    for (int x = 0; x < 5; x++) {
        cout << values[x] << " ";
    }

    cout << endl;
    return 0;
}