#include <stdio.h>
int main() {
    register int counter;
    printf("Counting up to 5:\n");
    for (counter = 1; counter <= 5; counter++) {
        printf("%d ", counter);
    }
    printf("\n");
//    printf("Address is: %p", &counter); // This would cause a compilation error!

    return 0;
}
