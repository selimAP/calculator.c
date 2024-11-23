#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 4) {
        printf("Error: Insufficient arguments. Usage: calc <number1> <operator> <number2>\n");
        return 1;
    }

    double num1 = strtod(argv[1], NULL);
    char *operation = argv[2];
    double num2 = strtod(argv[3], NULL);
    double result;

    if (strcmp(operation, "+") == 0) {
        result = num1 + num2;
        printf("= %.2f\n", result);
    } else if (strcmp(operation, "-") == 0) {
        result = num1 - num2;
        printf("= %.2f\n", result);
    } else if (strcmp(operation, "*") == 0) {
        result = num1 * num2;
        printf("= %.2f\n", result);
    } else if (strcmp(operation, "/") == 0) {
        if (num2 == 0) {
            printf("Error: Division by zero is not allowed.\n");
            return 0;
        }
        result = num1 / num2;
        printf("= %.2f\n", result);
    } else {
        printf("Error: Unknown operator\n");
        return 1;
    }

    return 0;
}

