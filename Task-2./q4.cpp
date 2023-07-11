#include <iostream>

int main() {
    const int ROWS = 13;
    const int COLS = 50;

    char flag[ROWS][COLS];

    // Fill the flag array with spaces initially
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            flag[i][j] = ' ';
        }
    }

    // Create the pattern for the flag
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if ((j >= 0 && j < 9) || (j >= 18 && j < 27) || (j >= 36 && j < 45)) {
                if (i % 2 == 0) {
                    flag[i][j] = '*';
                }
            } else {
                if (i % 2 != 0) {
                    flag[i][j] = '=';
                }
            }
        }
    }

    // Print the flag
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            std::cout << flag[i][j];
        }
        std::cout << std::endl;
    }

    return 0;
}
