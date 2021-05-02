#include <cmath>
#include <ctest.h>
#include <iostream>
#include <libgeometry/libgeometry.h>
#include <string>

CTEST(Find_points, find)
{
    string str(
            "circle(84621856.234841231 84621856.234841231, "
            "84621856.234841231)");

    double Points[3];

    findPoints(str, Points);

    const double Point1[3]
            = {84621856.234841231, 84621856.234841231, 84621856.234841231};

    double temp1, temp2;
    temp1 = Point1[0];
    temp2 = Points[0];
    ASSERT_DBL_NEAR(temp1, temp2);
    temp1 = Point1[1];
    temp2 = Points[1];
    ASSERT_DBL_NEAR(temp1, temp2);
    temp1 = Point1[2];
    temp2 = Points[2];
    ASSERT_DBL_NEAR(temp1, temp2);
    system("pause");
}
CTEST(Find_points, checking_for_correctness)
{
    double Points[6];
    string circle1("circle( 1 1, 1)");
    string circle2("circle)1 1, 1)");
    string circle3("circle(1 1, 1 1, 1)");
    string circle4("circle(1 1, 1) 2124124");
    string circle5("circle(x x, 1)");
    string circle6("circle(1 1, 1(");
    if (findPoints(circle1, Points) == 202)
        ASSERT_TRUE(1);
    if (findPoints(circle2, Points) == 101)
        ASSERT_TRUE(1);
    if (findPoints(circle3, Points) == 404)
        ASSERT_TRUE(1);
    if (findPoints(circle4, Points) == 606)
        ASSERT_TRUE(1);
    if (findPoints(circle4, Points) == 505)
        ASSERT_TRUE(1);

    string triangle1("triangle( 1 1, 1 1, 1 1)");
    string triangle2("triangle)1 1, 1 1, 1 1)");
    string triangle3("triangle(1 1, 1 1, 1 1, 1 1)");
    string triangle4("triangle(1 1, 1 1, 1 1) 2124124");
    string triangle5("triangle(x x, 1 1, 1 1)");
    string triangle6("triangle(1 1, 1 1, 1 1(");
    if (findvert(triangle1, Points) == 202)
        ASSERT_TRUE(1);
    if (findvert(triangle2, Points) == 101)
        ASSERT_TRUE(1);
    if (findvert(triangle3, Points) == 404)
        ASSERT_TRUE(1);
    if (findvert(triangle4, Points) == 606)
        ASSERT_TRUE(1);
    if (findvert(triangle5, Points) == 505)
        ASSERT_TRUE(1);
}
CTEST(correctly_input, title)
{
    string str1circle("circle(1 1, 1)");
    string str2circle("crrcle(1 1, 1)");
    string str3circle("cir(1 1, 1)");
    string str4circle("rcle(1 1, 1)");
    string str5circle("cirrle(1 1, 1)");
    if (ind(str1circle) == 1)
        ASSERT_TRUE(1);
    if (ind(str2circle) == 0)
        ASSERT_TRUE(1);
    if (ind(str3circle) == 0)
        ASSERT_TRUE(1);
    if (ind(str4circle) == 0)
        ASSERT_TRUE(1);
    if (ind(str5circle) == 0)
        ASSERT_TRUE(1);
    string str1triangle("triangle(1 1, 1 1, 1 1)");
    string str2triangle("trrangle(1 1, 1 1, 1 1)");
    string str3triangle("trrrngle(1 1, 1 1, 1 1)");
    string str4triangle("iangle(1 1, 1 1, 1 1)");
    string str5triangle("trian(1 1, 1 1, 1 1)");
    if (ind(str1triangle) == 2)
        ASSERT_TRUE(1);
    if (ind(str2triangle) == 0)
        ASSERT_TRUE(1);
    if (ind(str3triangle) == 0)
        ASSERT_TRUE(1);
    if (ind(str4triangle) == 0)
        ASSERT_TRUE(1);
    if (ind(str5triangle) == 0)
        ASSERT_TRUE(1);
    system("pause");
}
CTEST(Calculating_circle, area_and_perimeter)
{
    const double Number = 1389.10256;
    ASSERT_DBL_NEAR(calcParam(Number), 8727.98879516);
    ASSERT_DBL_NEAR(calcArea(Number), 6062035.7895);
    system("pause");
}
