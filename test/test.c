#include <cmath>
#include <ctest.h>
#include <iostream>
#include <libgeometry/libgeometry.h>
#include <string>

CTEST(proverka_kruga,point){
	char point=(1 1,3);
	int testExp = 1;
	int testResult = proverka_kruga(point);
	ASSERT_EQUAL(testExp, testResult);
}
CTEST(calculations,znach){
	double r=3;
	area = 3,14*pow(r,2);
	perimeter = 2 * 3,14 * r;
	int testExp = 1;
	int testResult = Calculations(x,y,r,perimeter,area);
	ASSERT_EQUAL(testExp, testResult);
}
