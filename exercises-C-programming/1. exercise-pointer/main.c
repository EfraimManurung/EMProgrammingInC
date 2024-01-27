/*
    Exercise from ChatGPT

    Efraim Manurung, 27th January 2024

    Goal : Try to exercise pointers. 

    Exercise:
    Write a C program that swaps the values of two integers using pointers. 
    Your program should take two integer inputs from the user, swap their values using pointers, 
    and then print the swapped values.

    version 1.0
*/

#include <stdio.h>

int myInput1;
int myInput2;

// Swap their values using pointers
int *p1 = &myInput2;
int *p2 = &myInput1;

int main()
{
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

    /* 
        Declared p1 and p2 as pointers to integers, pointing to myInput2 and myInput1, respectively. 
        However, I didn't actually swap the values using pointers. 
        In my print statements, I still printing the values of myInput1 and myInput2, 
        not the values pointed to by p1 and p2.

        the solution will be in main-solution.c and main-another-solution.c
    */

    // Print the swapped values
    printf("\nAfter swapped: \n");
    printf("Input 1: %d \n", *p1);
    printf("Input 2: %d \n", *p2);

    return 0;
}