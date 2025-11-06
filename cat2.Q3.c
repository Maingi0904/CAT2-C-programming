
/*
Name:Immaculate Nyambura Maingi
RegNo:CT101/G/26509/25
Date: 06/11/2025
Description:A program for processing list of intergers
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

// Function prototypes
void writeInputFile();
void processInputFile();
void displayFiles();

int main() {
    writeInputFile();
    processInputFile();
    displayFiles();
    return 0;
}

// Function to get 10 integers from user and write to input.txt
void writeInputFile() {
    FILE *fptr;
    int numbers[SIZE];

    fptr = fopen("input.txt", "w");
    if (fptr == NULL) {
        perror("Error opening input.txt for writing");
        exit(1);
    }

    printf("Enter %d integers:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        fprintf(fptr, "%d\n", numbers[i]);
    }

    fclose(fptr);
    printf("\nData successfully written to input.txt\n\n");
}

// Function to read integers, calculate sum and average, and write to output.txt
void processInputFile() {
    FILE *inFile, *outFile;
    int num, count = 0, sum = 0;
    float average = 0.0;

    inFile = fopen("input.txt", "r");
    if (inFile == NULL) {
        perror("Error opening input.txt for reading");
        exit(1);
    }

    while (fscanf(inFile, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(inFile);

    if (count == 0) {
        printf("No numbers found in input.txt.\n");
        exit(1);
    }

    average = (float)sum / count;

    outFile = fopen("output.txt", "w");
    if (outFile == NULL) {
        perror("Error opening output.txt for writing");
        exit(1);
    }

    fprintf(outFile, "Sum = %d\nAverage = %.2f\n", sum, average);
    fclose(outFile);

    printf("Results successfully written to output.txt\n\n");
}

// Function to read and display both files
void displayFiles() {
    FILE *file;
    char ch;

    printf("Contents of input.txt:\n----------------------\n");
    file = fopen("input.txt", "r");
    if (file == NULL) {
        perror("Error opening input.txt");
        exit(1);
    }
    while ((ch = fgetc(file)) != EOF)
        putchar(ch);
    fclose(file);

    printf("\nContents of output.txt:\n-----------------------\n");
    file = fopen("output.txt", "r");
    if (file == NULL) {
        perror("Error opening output.txt");
        exit(1);
    }
    while ((ch = fgetc(file)) != EOF)
        putchar(ch);
    fclose(file);
    printf("\n");
}
