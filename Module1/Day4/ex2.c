#include <stdio.h>

typedef struct {
    float real;
    float imaginary;
} ComplexNumber;

// Function to read a complex number
void readComplexNumber(ComplexNumber *num) {
    printf("Enter the real part: ");
    scanf("%f", &(num->real));
    printf("Enter the imaginary part: ");
    scanf("%f", &(num->imaginary));
}

// Function to write a complex number
void writeComplexNumber(ComplexNumber num) {
    printf("Complex number: %.2f + %.2fi\n", num.real, num.imaginary);
}

// Function to add two complex numbers
ComplexNumber addComplexNumbers(ComplexNumber num1, ComplexNumber num2) {
    ComplexNumber result;
    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;
    return result;
}

// Function to multiply two complex numbers
ComplexNumber multiplyComplexNumbers(ComplexNumber num1, ComplexNumber num2) {
    ComplexNumber result;
    result.real = (num1.real * num2.real) - (num1.imaginary * num2.imaginary);
    result.imaginary = (num1.real * num2.imaginary) + (num1.imaginary * num2.real);
    return result;
}

int main() {
    ComplexNumber num1, num2, sum, product;

    printf("Enter the first complex number:\n");
    readComplexNumber(&num1);

    printf("\nEnter the second complex number:\n");
    readComplexNumber(&num2);

    printf("\n");

    printf("First complex number:\n");
    writeComplexNumber(num1);

    printf("Second complex number:\n");
    writeComplexNumber(num2);

    sum = addComplexNumbers(num1, num2);
    printf("Sum of the complex numbers:\n");
    writeComplexNumber(sum);

    product = multiplyComplexNumbers(num1, num2);
    printf("Product of the complex numbers:\n");
    writeComplexNumber(product);

    return 0;
}