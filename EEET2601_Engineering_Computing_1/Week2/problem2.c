#include <stdio.h>

int main() {

    float vnd, usd;

    printf("Enter your ammount in VND: ");
    scanf("%f", &vnd);

    usd = vnd / 23150;
    printf("The equivilent in USD is: %.2f \n", usd);
    
    return 0;
}