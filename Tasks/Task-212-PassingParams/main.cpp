#include "mbed.h"
#include "ComplexNos_C.hpp"

// TASK - write and test complexConjugate, complexNegate, complexSubtract, complexMagnitude, complexMultiply and complexDivide

int main() {
    printf("\n\nTASK312\n");

    //Create instance of a complex number
    ComplexNumber_C p = {2.0, 3.0};
    ComplexNumber_C q = {1.0, 1.0};
    complexDisplay("p", p);
    complexDisplay("q", q);
 
    ComplexNumber_C sum = complexAdd(p, q);
    complexDisplay("p+q", sum);
    ComplexNumber_C conjugate1 = complexConjugate(p);
    complexDisplay("Conjugate of p", conjugate1);
    ComplexNumber_C conjugate2 = complexConjugate(q);
    complexDisplay("Conjugate of q", conjugate2);

    
    while (true) {
    }
}
