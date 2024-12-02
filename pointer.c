#include <stdio.h>

int main() {
    int x[4] = {12, 20, 39, 43}, *y;
    y = &x[0];

    printf("%d\n", x[0]);       // Print the first element of the array
    printf("%d\n", *y);         // Dereference y (points to x[0])
    printf("%d\n", *y + 1);   // Dereference (y + 1) (points to x[1])
    printf("%d\n", (*y) + 1);   // Add 1 to the value pointed by y
    printf("%d\n", *(y + 1));   // Dereference (y + 1) again (points to x[1])

    y += 2;                     // Increment y to point to x[2]
    printf("%d\n", *y);         // Dereference y (now points to x[2])

    *y = 38;                    // Assign 38 to the value at x[2]
    printf("%d\n", *y-1);         // Print the value at x[2] (now 38)

    *y ++;                    // Increment the value at x[2]
    printf("%d\n", *y);   
    
    (*y)++; 
    printf("%d\n", *y);

    return 0;
}
