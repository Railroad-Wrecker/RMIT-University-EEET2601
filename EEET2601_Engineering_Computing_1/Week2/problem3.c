#include <stdio.h>
#include <math.h>

int main() {

    float x, y;

    printf("Enter x: ");
    scanf("%f", &x);
    printf("Enter y: ");
    scanf("%f", &y);

    float xpowy = pow(x, y);
    printf("x^y: %.2f", xpowy);

    return 0;
}