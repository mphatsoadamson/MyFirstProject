#include <iostream>
#include <cstdlib> // C++ function to generate random numbers
#include <time.h>   // For time()

using namespace std;

int main() {
    /*This program will create different sequence of 
     random numbers on every program run*/
     
    
    srand(time(0)); // Use current time as seed for random generator

    int daysUntilExpiration = rand() % 12; // Generates random number between 0 and 11
    cout << "Days until expiration: " << daysUntilExpiration << endl;

    if (daysUntilExpiration <= 0) {
        cout << "Your subscription has expired. \n";
    } else if (daysUntilExpiration <= 1) {
        cout << "Your subscription expires within a day! \n";
        cout << "Renew now and save 20%! \n";
    } else if (daysUntilExpiration <= 5) {
        cout << "Your subscription expires in " << daysUntilExpiration << " days. \n";
        cout << "Renew now and save 10%! \n";
    } else if (daysUntilExpiration <= 10) {
        cout << "Your subscription will expire soon. Renew now! \n";
    } else {
        cout << "You have an active subscription. \n";
    }

    return 0;
}
