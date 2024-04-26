#include <iostream>

using namespace std;

int main() {
    int inputValue;

    // Prompt the user for an integer value between 5 and 10
    cout << "Please enter an integer between 5 and 10: ";
    cin >> inputValue;

    // Check if the input is within the valid range
    while (inputValue < 5 || inputValue > 10) {
        // Prompt the user again if the input is invalid
        cout << "Invalid input. Please enter an integer between 5 and 10: ";
        cin >> inputValue;
    }

    // Output a confirmation message
    cout << "Your input value (" << inputValue << ") has been accepted.\n";

    return 0;
}
