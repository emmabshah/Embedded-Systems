#include "mbed.h"

// Date Type ComplexNumber_C
typedef struct {
  double real;
  double imag;
} ComplexNumber_C;

ComplexNumber_C complexSum(ComplexNumber_C p1, ComplexNumber_C q1);

ComplexNumber_C complexSum(ComplexNumber_C p1, ComplexNumber_C q1)
    {
        ComplexNumber_C result = p1;
        result.real += q1.real;
        result.imag += q1.imag;
        return result;
    }

int main() {

    //Create instance of a complex number
    ComplexNumber_C p;

    //Initialise each attribute 
    p.real = 2.0;
    p.imag = 3.0;
    
    //Create and Initialise 
    ComplexNumber_C q = {1.0, 1.0};

    // TASK:
    // Create another complex number y
    ComplexNumber_C y;

    // Calculate the complex sum of p and q and store in y
        //y.real = p.real + q.real;
        //y.imag = p.imag + q.imag;
        y = complexSum(p, q);

    // Use printf to display as a complex number (hint: you need two placeholders)
    printf("The sum of the complex numbers %f + %f j and %f + %f j is %f + %f j\n", p.real, p.imag, q.real, q.imag, y);

    while (true) {
    }
}
