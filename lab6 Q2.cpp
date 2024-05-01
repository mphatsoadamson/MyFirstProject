#include <iostream>

using namespace std;

int main() {
    int a, b;

    
    cout << "Enter the number of rows (must not exceed 3): ";
    cin >> a;

    
    if (a > 3) {
        cout << "Error: Maximum number of rows exceeded." << endl;
        return 1;
    }

    cout << "Enter the number of columns (must not exceed 3): ";
    cin >> b;

   
    if (b > 3) {
        cout << "Error: Maximum number of columns exceeded." << endl;
        return 1;
    }

    
    double **array = new double*[a];
    for (int i = 0; i < a; ++i) {
        array[i] = new double[b];
    }

   
    cout << "Enter values for the array" << endl;
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
            cout << "Enter value for element [" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }

   
    cout << "The array values are:" << endl;
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    
    for (int i = 0; i < a; ++i) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}
