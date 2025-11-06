 /*
Name:Immaculate Nyambura Maingi
RegNo:CT101/G/26509/25
Date: 06/11/2025
Description:A program for  2D array
*/



#include <stdio.h>

int main() {
    // i. Define an array data structure:
    // An array is a collection of elements of the same type stored in contiguous memory locations.

    // ii. Declare and initialize a 2D array named scores
    int scores[2][4] = {
        {65, 92, 35, 70},
        {84, 72, 59, 67}
    };

    // iii. Print the elements using nested for loops
    printf("The elements of the 2D array are:\n");

    for (int i = 0; i < 2; i++) {          // Loop through rows
        for (int j = 0; j < 4; j++) {      // Loop through columns
            printf("%d\t", scores[i][j]);
        }
        printf("\n");                      // New line after each row
    }

    return 0;
}
