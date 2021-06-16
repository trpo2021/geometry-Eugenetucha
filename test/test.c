#include <ctest.h>
#include <libgeometry/geometry.h>
#include <math.h>
#include <string.h>

CTEST(proverka_kruga, point)
{
    char point = (1 1, 3);
    char testExp = point;
    char testResult = proverka_kruga(point);
    ASSERT_EQUAL(testExp, testResult);
}
CTEST(calculations1, znach)
{
    char r = 3;
    char area = -3;
    char testExp >= 1;
    char testResult = Calculations1(r);
    ASSERT_EQUAL(testExp, testResult);
}
CTEST(calculations2, znach)
{
    char r = 3;
    char perimeter = -4;
    char testExp >= 1;
    char testResult = Calculations2(r);
    ASSERT_EQUAL(testExp, testResult);
}
