#include <stdio.h>

#define ROWS 3  // You can change this based on your needs
#define COLS 4  // You can change this based on your needs

int main() {
    // Step 1: Declare and initialize a 2D array
    int matrix[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Step 2: Declare a 1D array to store the sum of each row
    int rowSums[ROWS] = {0};

    // Step 3: Use nested loops to traverse the 2D array and calculate row sums
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            rowSums[i] += matrix[i][j];  // Add the value of matrix[i][j] to rowSums[i]
        }
    }

    // Step 4: Display the sum of each row
    printf("The sum of each row is:\n");
    for (int i = 0; i < ROWS; i++) {
        printf("Row %d: %d\n", i + 1, rowSums[i]);
    }

    return 0;
}
