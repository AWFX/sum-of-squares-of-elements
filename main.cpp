#include <iostream>
#include "time.h"
#include "cstdlib"

using namespace std;

int main() {
    srand(time(NULL));

    int width, length, sum = 1;
    cout << "Enter width of array: ";
    cin >> width;
    cout << "Enter length of array: ";
    cin >> length;

    // create array of numbers
    int **array = new int *[width];
    for (int i = 0; i < width; i++) {
        array[i] = new int[length];
    }

    // filling the array
    for (int i = 0; i < width; i++) {
        for (int k = 0; k < length; k++) {
            array[i][k] = -10 + rand() % 11;
            sum += array[i][k] * array[i][k];
        }
    }

    cout << "Array: " << endl;
    for (int i = 0; i < width; i++) {
        for (int k = 0; k < length; k++) {
            printf("%4d", array[i][k]);
        }
        cout << endl;
    }
    cout << "Sum of squares of elements: " << sum;
    return 0;
}
