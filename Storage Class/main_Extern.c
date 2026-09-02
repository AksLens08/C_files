#include <stdio.h>
extern int global_score;
void displayScore();

int main() {
    printf("Score in main.c: %d\n", global_score);
    displayScore();
    return 0;
}

#include <stdio.h>

// Actual definition and initialization of the variable
int global_score = 100;

void displayScore() {
    printf("Score in support.c: %d\n", global_score);
}
