#include <stdio.h>


int add(int a, int b) {
    return a + b;
}


int subtract(int a, int b) {
    return a - b;
}


int multiply(int a, int b) {
    return a * b;
}

int main() {
    int num1, num2;

    
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    
    printf("Addition: %d + %d = %d\n", num1, num2, add(num1, num2));

    
    printf("Subtraction: %d - %d = %d\n", num1, num2, subtract(num1, num2));

    
    printf("Multiplication: %d * %d = %d\n", num1, num2, multiply(num1, num2));

    return 0;
}
