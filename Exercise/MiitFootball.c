#include <stdio.h>

int totalScoreByPlayer(int arr[], int n) {
    int sum = 0;
    for (int k = 0; k < n; k++) {
        sum += arr[k];
    }
    return sum;
}

void display(int m, int n, int arr[m][n]) {
    for (int i = 0; i < m; i++) {
        printf("\n %d Batch:", (2021 + i));
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
    }
}

int main() {
    int players, noOfMatch;
    printf("Enter the number of players: ");
    scanf("%d", &players);
    printf("Enter the number of matches: ");
    scanf("%d", &noOfMatch);

    int score[players][noOfMatch];

    printf("Enter scores for each player:\n");
    for (int i = 0; i < players; i++) {
        printf("\n %d Batch:", (2021 + i));
        for (int j = 0; j < noOfMatch; j++) {
            scanf("%d", &score[i][j]);
        }
    }

    printf("Football Matches:\n");
    display(players, noOfMatch, score);

    int total;
    printf("\nTotal Scores of Each Player:\n");
    for (int i = 0; i < players; i++) {
        total = totalScoreByPlayer(score[i], noOfMatch);
        printf(" %d Batch's Total Score: %d\n", (2021 + i), total);
    }

    return 0;
}