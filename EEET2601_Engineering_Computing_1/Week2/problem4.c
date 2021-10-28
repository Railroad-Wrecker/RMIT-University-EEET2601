#include <stdio.h>

int main() {

    int asmt1, asmt2, asmt3;

    printf("Enter 3 assessment scores (Weighted 30%%, 30%%, and 40%% respectively): ");
    scanf("%d %d %d", &asmt1, &asmt2, &asmt3);

    float final_result = (asmt1 * 0.3 + asmt2 * 0.3 + asmt3 * 0.4);
    printf("Your final result is %.2f", final_result);

    return 0;
}