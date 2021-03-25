 #include<stdio.h>
 #include "header.h"
 #include "unity.h"

static complex_t  test_n1;
static complex_t  test_n2;
static complex_t  test_expected={0,0};


void setUp(void) {}
/* Required by the unity test framework */
void tearDown(void) {}


void test_sum(void)
{
	/**
	 * @brief test case 1
	 * 
	 */
	test_n1.real=3;
	test_n1.imag=5;
	test_n2.real=2;
	test_n2.imag=4;
	TEST_ASSERT_EQUAL(SUCCESS,add(test_n1,test_n2,&test_expected));
	TEST_ASSERT_EQUAL(5,test_expected.real);
	TEST_ASSERT_EQUAL(9,test_expected.imag);
}

void test_diff(void)
{
	/**
	 * @brief test case for testing diff function
	 * 
	 */
	test_n1.real=2;
	test_n1.imag=2;
	test_n2.real=2;
	test_n2.imag=2;
	TEST_ASSERT_EQUAL(SUCCESS,diff(test_n1,test_n2,&test_expected));
	TEST_ASSERT_EQUAL(0,test_expected.real);
	TEST_ASSERT_EQUAL(0,test_expected.imag);
}	

void test_mul(void)
{
	/**
	 * @brief test case for testing mul function
	 * 
	 */
	test_n1.real=3;
	test_n1.imag=5;
	test_n2.real=2;
	test_n2.imag=4;
	TEST_ASSERT_EQUAL(SUCCESS,mul(test_n1,test_n2,&test_expected));
	TEST_ASSERT_EQUAL(-14,test_expected.real);
	TEST_ASSERT_EQUAL(32,test_expected.imag);
}	
void test_div(void)
{
	/**
	 * @brief test case for testing div function
	 * 
	 */
	test_n1.real=-6;
	test_n1.imag=-6;
	test_n2.real=-6;
	test_n2.imag=6;
	TEST_ASSERT_EQUAL(SUCCESS,div(test_n1,test_n2,&test_expected));
	TEST_ASSERT_EQUAL(0,test_expected.real);
	TEST_ASSERT_EQUAL(1,test_expected.imag);
	
	/**
	 * @brief test case for checking divison error
	 * 
	 */
	test_n1.real=0;
	test_n1.imag=0;
	test_n2.real=0;
	test_n2.imag=0;
	TEST_ASSERT_EQUAL(ERROR_DIV_ZERO,div(test_n1,test_n2,&test_expected));
}	
	
	
	
int main()
{
	/**
	 * @brief Construct a new unity begin object
	 * 
	 */
	UNITY_BEGIN();

    
    RUN_TEST(test_sum);
	RUN_TEST(test_diff);
	RUN_TEST(test_mul);
	RUN_TEST(test_div);
	return UNITY_END();
}
