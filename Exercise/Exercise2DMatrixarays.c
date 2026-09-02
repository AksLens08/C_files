#include <stdio.h>

int main() {
    int sales[5][3];
    int salesman_total[5] = {0};
    int item_total[3] = {0};
    int i, j;

    printf("Enter the data:\n");
    for (i = 0; i < 5; i++) {
        printf("Enter the sales of 3 items sold by salesman %d: ", i + 1);
        for (j = 0; j < 3; j++) {
            scanf("%d", &sales[i][j]);
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            salesman_total[i] += sales[i][j];
            item_total[j] += sales[i][j];
        }
    }

    for (i = 0; i < 5; i++) {
        printf("Total Sales By Salesman %d = %d\n", i + 1, salesman_total[i]);
    }

    for (j = 0; j < 3; j++) {
        printf("Total sales of item %d = %d\n", j + 1, item_total[j]);
    }

    return 0;
}