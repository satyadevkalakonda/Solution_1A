#include<stdio.h>
#include "header.h"

/**
 * @brief divison function
 * 
 * @param n1 
 * @param n2 
 * @param sum
 * @return error_t 
 */
error_t div(complex_t n1,complex_t n2,complex_t* sum)
{
	
	 if(n1.real==0 || n2.imag==0)
    {
        return ERROR_DIV_ZERO;
    }
    int x = n1.real*n2.real + n1.imag*n2.imag;
    int y = n1.imag*n2.real - n1.real*n2.imag;
    int z = n2.real*n2.real + n2.imag*n2.imag;
    sum->real=x/z;
    sum->imag=y/z;
    return SUCCESS;
}
