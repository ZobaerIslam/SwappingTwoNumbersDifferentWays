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
    printf("---------------------------------------------------------------\n");


    return 0;
}