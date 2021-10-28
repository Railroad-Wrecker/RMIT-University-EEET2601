#include <stdio.h>

int main() {

    int input_minute; 
    int output_hour; 
    int output_minute;

    printf("Input in minutes: ");
    scanf("%d", &input_minute);

    output_minute = input_minute % 60;
    output_hour = (input_minute - output_minute) / 60;
    printf("%d Minutes Converted into: %d hours %d minutes", input_minute, output_hour, output_minute);

    return 0;
}