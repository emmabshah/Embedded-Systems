#include "stdio.h"
#include "ComplexNos_C.hpp"

ComplexNumber_C complexAdd(const ComplexNumber_C a, const ComplexNumber_C b) {
    ComplexNumber_C y = a;
    y.real += b.real;
    y.imag += b.imag;
    return y;
}

// TASK - write and test complexConjugate, complexNegate, complexSubtract, complexMagnitude, complexMultiply and complexDivide
ComplexNumber_C complexConjugate(const ComplexNumber_C a) 
{
    ComplexNumber_C c;
    c.real = a.real;
    c.imag = -1*a.imag;
    return c;  
}

void complexDisplay(const char *strName, const ComplexNumber_C u) {
    printf("%s = %f + j%f\n", strName, u.real, u.imag);
}