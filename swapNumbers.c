#include<stdio.h>

// Function declaration
void swap(int*, int*);

int main()
{
    // Define variables and assign values
    int a = 10, b = 5, temp;
    
    printf("-----------------------** Method: 1 **--------------------------\n");
    printf("The simple method using a third variable:\n");
    
    printf("Before swapping: a = %d, b = %d\n", a, b);
    
    // Swap a and b:
    temp = a;
    a = b;
    b = temp;
 
    printf("After swapping: a = %d, b = %d\n", a, b);
    printf("---------------------------------------------------------------\n\n");


    // Assign values
    a = 10, b = 5;
    
    printf("-----------------------** Method: 2 **--------------------------\n");
    printf("Using arithmetic operators (+) and (-):\n");
    
    printf("Before swapping: a = %d, b = %d\n", a, b);
    
    // Swap a and b:
    a = a + b;  // a = 15 and b = 5
    b = a - b;  // a = 15 and b = 10
    a = a - b;  // a = 5 and b = 10
 
    printf("After swapping: a = %d, b = %d\n", a, b);
    printf("---------------------------------------------------------------\n\n");


    // Assign values
    a = 10, b = 5;
    
    printf("-----------------------** Method: 3 **--------------------------\n");
    printf("Swapping of Two Numbers Using Bit-wise XOR(^) Operator :\n");
    
    printf("Before swapping: a = %d, b = %d\n", a, b);
    
    // Swap a and b:
    a = a ^ b;  // (0000 1010)^(0001 0100) = 0001 1110 // a = 15, b = 5
    b = a ^ b;  // (0001 1110)^(0001 0100) = 0000 1010 // a = 15, b = 10
    a = a ^ b;  // (0001 1110)^(0000 1010) = 0001 0100 // a = 5, b = 10
 
    printf("After swapping: a = %d, b = %d\n", a, b);
    printf("---------------------------------------------------------------\n\n");


    // Assign values
    a = 10, b = 5;

    // Define Pointer 
    int *ptr1, *ptr2;
    
    printf("-----------------------** Method: 4 **--------------------------\n");
    printf("Swapping of Two Numbers Using Pointer :\n");
    
    printf("Before swapping: a = %d, b = %d\n", a, b);
    
    // Point to the variable (a and b) Address
    ptr1 = &a;
    ptr2 = &b;

    // Swap a and b:
    temp = *ptr2;   // a = 10, b = 5
    *ptr2 = *ptr1;   // a = 10, b = 10
    *ptr1 = temp;   // a = 5, b = 10
 
    printf("After swapping: a = %d, b = %d\n", a, b);
    printf("---------------------------------------------------------------\n\n");


    // Assign values
    a = 10, b = 5;
    
    printf("-----------------------** Method: 5 **--------------------------\n");
    printf("Swapping of Two Numbers Using User-Defined Function :\n");
    
    printf("Before swapping: a = %d, b = %d\n", a, b);
    
    // Call function
    swap(&a, &b); 
 
    printf("After swapping: a = %d, b = %d\n", a, b);
    printf("---------------------------------------------------------------\n\n");



    return 0;
}

// Function definition
void swap(int *ptr1, int *ptr2) {
    int temp;
    
    temp = *ptr2;   // a = 10, b = 5
    *ptr2 = *ptr1;  // a = 10, b = 10
    *ptr1 = temp;   // a = 5, b = 10
}