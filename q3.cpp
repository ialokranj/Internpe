#include <iostream>
using namespace std;

void namedLoop() {
    loop_label:  // Label for the loop
    while (true) {
        // Code inside the loop
        cout << "Inside the named loop" << endl;

        // Example exit condition
        char user_input;
        cout << "Continue? (y/n): ";
        cin >> user_input;
        if (user_input == 'n' || user_input == 'N') {
            break;  // Exit the loop
        } else {
            continue;  // Continue to the next iteration of the loop
        }
    }
}

int main() {
    namedLoop();  // Call the named loop function
    return 0;
}
