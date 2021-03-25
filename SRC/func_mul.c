#include<stdio.h>
#include "header.h"

/**
 * @brief function multiplication
 * 
 * @param n1 
 * @param n2 
 * @param sum 
 * @return error_t 
 */

error_t mul(complex_t n1,complex_t n2,complex_t* sum)
{
	
	sum->real=(n1.real)*(n2.real)-(n1.imag)*(n2.imag);
	sum->imag=(n1.imag)*(n2.imag)+(n1.real)*(n2.imag);
	return SUCCESS;
}