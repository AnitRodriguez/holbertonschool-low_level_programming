#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Initialize the random number generator with the current time
    srand(time(NULL));
    
    // Generate a random number between INT_MIN and INT_MAX
    int n = rand();
    
    printf("The number is %d\n", n);
    
    if (n > 0) {
        printf("is positive\n");
    } else if (n == 0) {
        printf("is zero\n");
    } else {
        printf("is negative\n");
    }
    
    printf("\n");
    
    return 0;
}
