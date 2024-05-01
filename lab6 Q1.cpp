#include <iostream>
#include <string>

using namespace std;

int main() {
    int* dynamicInt = new int;
    cout << "Enter value for number: ";
    cin >> *dynamicInt;

    string* dynamicString = new string;
    cout << "Enter word: ";
    cin.ignore();
    getline(cin, *dynamicString);

    cout << "Dynamically allocated integer: " << *dynamicInt << endl;
    cout << "Dynamically allocated string: " << *dynamicString << endl;

    delete dynamicInt;
    delete dynamicString;

    return 0;
}
