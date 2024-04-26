#include <iostream>

using namespace std;

// Function to calculate the area of a triangle
double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

// Function to calculate the area of a rectangle
double calculateRectangleArea(double length, double width) {
    return length * width;
}

// Function to calculate the area of a square
double calculateSquareArea(double side) {
    return side * side;
}

int main() {
    int choice;
    char repeat;

    do {
        // Display options to the user
        cout << "Choose the shape to calculate the area:\n";
        cout << "1. Triangle\n";
        cout << "2. Rectangle\n";
        cout << "3. Square\n";
        cout << "Enter your choice (1, 2, or 3): ";
        cin >> choice;

        // Validate the user's input
        while (choice < 1 || choice > 3) {
            cout << "Invalid input. Please enter a valid choice (1, 2, or 3): ";
            cin >> choice;
        }

        // Variables to store dimensions
        double base, height, length, width, side;

        // Calculate and output the area based on the user's choice
        switch (choice) {
            case 1:
                cout << "Enter the base and height of the triangle: ";
                cin >> base >> height;
                cout << "Area of the triangle: " << calculateTriangleArea(base, height) << endl;
                break;
            case 2:
                cout << "Enter the length and width of the rectangle: ";
                cin >> length >> width;
                cout << "Area of the rectangle: " << calculateRectangleArea(length, width) << endl;
                break;
            case 3:
                cout << "Enter the side length of the square: ";
                cin >> side;
                cout << "Area of the square: " << calculateSquareArea(side) << endl;
                break;
        }

        // Ask the user if they want to calculate the area again
        cout << "Do you want to calculate the area of another shape? (y/n): ";
        cin >> repeat;

    } while (repeat == 'y' || repeat == 'Y');

    cout << "Program exited.\n";

    return 0;
}
