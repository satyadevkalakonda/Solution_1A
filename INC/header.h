

#ifndef __header_h__
#define __header_h__


typedef struct complex_t 
{

float real;

float imag;

} complex_t;

typedef enum error_t
{
	ERROR_DIV_ZERO = -2,
	SUCCESS= 1,
	ERROR_NULL_PTR = -1
}error_t;
/**
 * @brief function prototypes
 * 
 * @param n1 
 * @param n2 
 * @param sum 
 * @return error_t 
 */
error_t add(complex_t n1,complex_t n2,complex_t* sum);
error_t diff(complex_t n1,complex_t n2,complex_t* sum);
error_t mul(complex_t n1,complex_t n2,complex_t* sum);
error_t div(complex_t n1,complex_t n2,complex_t* sum);

#endif