#include <ctest.h>
#include <libgeometry/geometry.h>
#include <math.h>
#include <string.h>

CTEST(proverka_kruga, point)
{
    char point = (1 1, 3);
    int testExp = 1;
    int testResult = proverka_kruga(point);
    ASSERT_EQUAL(testExp, testResult);
}
CTEST(calculations1, znach)
{
    int r = 3;
    int area = -3;
    int testExp >=1;
    int testResult = Calculations1(r);
    ASSERT_EQUAL(testExp, testResult);
}
CTEST(calculations2, znach)
{
    int r = 3;
    int perimeter = -4;
    int testExp >=1;
    int testResult = Calculations2(r);
    ASSERT_EQUAL(testExp, testResult);
}
