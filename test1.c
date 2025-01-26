#include <stdio.h>

int main() {
    int x = 10;
    int *a;

    a = &x;  // Assigning the address of x to a
    printf("Value of x: %d\n", x);    // Output: 10
    printf("Value pointed to by a: %d\n", a); 
    printf("Value pointed to by *a: %d\n", *a);  // Output: 10

    *a = 20; // Assigning a new value to the memory location pointed to by a
    printf("New value of x: %d\n", x);    // Output: 20
    printf("New value pointed to by a: %d\n", *a);  // Output: 20
  
    int y = 20;
    
    int *b = &y;

    *a = *b;  // Copies the value pointed to by b into the memory location pointed to by a
    printf("Value of x: %d\n", x);    // Output: 20
    return 0;
}
