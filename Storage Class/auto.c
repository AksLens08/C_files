#include <stdio.h>
void autoExample() {
       auto int age = 25;
    printf("Inside function: age = %d\n", age);
    printf("Address of age %p", &age);
}

int main() {
    autoExample();
//    printf("%d", age); // Error! 'age' is not visible here.
    return 0;
}
