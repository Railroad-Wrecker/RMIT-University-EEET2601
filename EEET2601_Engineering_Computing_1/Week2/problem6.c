#include <stdio.h>

int main() {

    int num, sum = 0;

    printf("Input your number: ");
    scanf("%d", &num);

    sum = num % 10 + (num/10) % 10 + (num/100);     
    printf("Sum of all digits: %d", sum);

    return 0;
}
