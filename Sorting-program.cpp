#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int choice;

    cout << "=== Sorting Program ===" << endl;
    cout << "Enter 5 numbers: ";

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "\nOriginal Array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    cout << "\n\n=== Sorting Menu ===" << endl;
    cout << "[1] Bubble Sort" << endl;
    cout << "[2] Insertion Sort" << endl;
    cout << "[3] Selection Sort" << endl;
    cout << "[4] Exit" << endl;

    cout << "\nEnter your choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "\nSorting using Bubble Sort..." << endl;

        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4 - i; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
    else if (choice == 2) {
        cout << "\nSorting using Insertion Sort..." << endl;

        for (int i = 1; i < 5; i++) {
            int key = arr[i];
            int j = i - 1;

            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }

            arr[j + 1] = key;
        }
    }
    else if (choice == 3) {
        cout << "\nSorting using Selection Sort..." << endl;

        for (int i = 0; i < 4; i++) {
            int minIndex = i;

            for (int j = i + 1; j < 5; j++) {
                if (arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }

            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
    else if (choice == 4) {
        cout << "\nExiting program..." << endl;
        return 0;
    }
    else {
        cout << "\nInvalid choice!" << endl;
        return 0;
    }

    cout << "\nSorted Array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}