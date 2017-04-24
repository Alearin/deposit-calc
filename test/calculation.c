#include "../src/deposit.h"

#include "../thirdparty/ctest.h"

CTEST(suite, test1)
{
    int term = 12;
    int amount = 90000;
    int result = Calculation_of_income(term, amount);
    ASSERT_EQUAL(81000, result);
}

CTEST(suite, test2)
{
    int term = 44;
    int amount = 90000;
    int result = Calculation_of_income(term, amount);
    ASSERT_EQUAL(91800, result);
}

CTEST(suite, test3)
{
    int term = 138;
    int amount = 90000;
    int result = Calculation_of_income(term, amount);
    ASSERT_EQUAL(95400, result);
}

CTEST(suite, test4)
{
    int term = 348;
    int amount = 90000;
    int result = Calculation_of_income(term, amount);
    ASSERT_EQUAL(100800, result);
}

CTEST(suite, test5)
{
    int term = 12;
    int amount = 120000;
    int result = Calculation_of_income(term, amount);
    ASSERT_EQUAL(108000, result);
}

CTEST(suite, test6)
{
    int term = 44;
    int amount = 120000;
    int result = Calculation_of_income(term, amount);
    ASSERT_EQUAL(123600, result);
}

CTEST(suite, test7)
{
    int term = 138;
    int amount = 120000;
    int result = Calculation_of_income(term, amount);
    ASSERT_EQUAL(129600, result);
}

CTEST(suite, test8)
{
    int term = 348;
    int amount = 120000;
    int result = Calculation_of_income(term, amount);
    ASSERT_EQUAL(138000, result);
}

