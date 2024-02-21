#ifndef __ComplexNos_C__
#define __ComplexNos_C__

//Declarations, type defintions, things like that in the header. External functions in the other .cpp
typedef struct {
  double real;
  double imag;
} ComplexNumber_C;

//So it knows our functions. Function declarations 
extern ComplexNumber_C complexAdd(const ComplexNumber_C a, const ComplexNumber_C b);
extern void complexDisplay(const char *strName, const ComplexNumber_C u);
extern ComplexNumber_C complexConjugate(const ComplexNumber_C a);

#endif