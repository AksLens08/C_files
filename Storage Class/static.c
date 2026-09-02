#include <stdio.h>
void countCalls() {
    static int count = 0;
    // int count = 0;
    count++;
    printf("This function has been called %d time(s)\n", count);
}

int main() {
    countCalls(); // Output: 1 time(s)
    countCalls(); // Output: 2 time(s)
    countCalls(); // Output: 3 time(s)
    return 0;
}
