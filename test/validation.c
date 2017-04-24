#include "../src/deposit.h"

#include "../thirdparty/ctest.h"

CTEST(suite, test1)
{
    int term = 0;
    int amount = 120000;
    int result = Input_Validation(term, amount);
    ASSERT_EQUAL(-1, result);
}

CTEST(suite, test2)
{
    int term = 34;
    int amount = 120000;
    int result = Input_Validation(term, amount);
    ASSERT_EQUAL(0, result);
}

CTEST(suite, test3)
{
    int term = 34;
    int amount = 0;
    int result = Input_Validation(term, amount);
    ASSERT_EQUAL(-1, result);
}

CTEST(suite, test4)
{
    int term = 34;
    int amount = -120000;
    int result = Input_Validation(term, amount);
    ASSERT_EQUAL(-1, result);
}

CTEST(suite, test5)
{
    int term = -34;
    int amount = 120000;
    int result = Input_Validation(term, amount);
    ASSERT_EQUAL(-1, result);
}



