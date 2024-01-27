/*
    Exercise from ChatGPT

    Efraim Manurung, 27th January 2024

    Goal : Try to exercise pointers. 

    Exercise:
    Write a C program that swaps the values of two integers using pointers. 
    Your program should take two integer inputs from the user, swap their values using pointers, 
    and then print the swapped values.

    version 1.2
*/

#include <stdio.h>

// Put the global pointer to local

// Now we will impelement a function to swap values
void swapValues(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
int main()
{   
    int myInput1, myInput2;

    // Ask the user to type a number for input 1
    printf("Type a number for input 1: \n");

    // Get and save the number 
    scanf("%d", &myInput1);

     // Ask the user to type a number for input 2
    printf("Type a number for input 2: \n");

    // Get and save the number 
    scanf("%d", &myInput2);

    // Display the values before swapping
    printf("\nValues before swapping: \n");
    printf("input 1: %d \n", myInput1);
    printf("input 2: %d \n", myInput2);

    // Swap their values using functions
    swapValues(&myInput1, &myInput2);

    // Print the swapped values
    printf("\nAfter swapped: \n");
    printf("Input 1: %d \n", myInput1);
    printf("Input 2: %d \n", myInput2);

    return 0;
}