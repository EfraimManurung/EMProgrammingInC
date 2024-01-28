/*
    Exercise from ChatGPT

    Efraim Manurung, 28th January 2024

    Goal : Fluent on pointers

    Exercise:
    Write a C program that finds the maximum and minimum values in an array of integers using pointers. 
    The program should take an array of integers as input from the user, 
    use pointers to find the maximum and minimum values, and then print the results.

    version 1.0
*/

#include <stdio.h>

// Function to find the maximum and minimum values using pointers
void findsMaxAndMin(int *arrayInput, int arraySize, int *max, int *min)
{
    // Initialize max and min with the first element of the array
    *max = *arrayInput;
    *min = *arrayInput;

    // Iterate through array
    for(int i = 0; i < arraySize; i++)
    {
        if (*(arrayInput + i) > *max) {
            *max = *(arrayInput + i);
        }
        if (*(arrayInput + i) < *min) {
            *min = *(arrayInput + i);
        }
    }

}

int main()
{   
    int arraySizeInput;

    // Get the size of array from the user
    printf("Enter the size of the array: ");
    scanf("%d /n", &arraySizeInput);

    // Declare an array of integers with given size
    int arrayInput[arraySizeInput];

    // Input the elements of the array from the user
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < arraySizeInput; i++)
    {
        printf("Element %d: ", i+1);
        scanf("%d", &arrayInput[i]);
    }

    // Declare variables to store min and max values
    int min, max;

    // Call the function to find max and min using pointers
    findsMaxAndMin(arrayInput, arraySizeInput, &max, &min);

     // Display the results
    printf("\nMaximum value in the array: %d\n", max);
    printf("Minimum value in the array: %d\n", min);

    return 0;
}