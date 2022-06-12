#include<stdio.h>
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



    return 0;
}