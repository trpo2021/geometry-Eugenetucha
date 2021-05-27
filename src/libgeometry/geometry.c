#include <assert.h>
#include <ctype.h>
#include <libgeometry/geometry.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct circle_elements {
    double x;
    double y;
    double r;
} circle;

int Calculations1(int r)
{
    int area = 3.14 * r * r;
    return area;
}
int Calculations2(int r)
{
    int perimeter = 2 * 3.14 * r;
    return perimeter;
}
char* proverka_symv(char* point, char symbol)
{
    if (*point == symbol) {
        point++;
        return point;
    }
    if (*point == ' ') {
        point++;
    } else {
        printf("Excepted '%c'\n", symbol);
        return 0;
    }
}

char* proverka_znach(char* point, double* number)
{
    char* end;
    while (isdigit(*point) == 0) {
        if (*point == ' ') {
            point++;

        } else {
            (printf("Excpected one or more elements of circle\n"));
            return 0;
        }
    }

    if (isdigit(*point) != 0) {
        *number = strtod(point, &end);
        point = end;
        return point;
    }
    if (isdigit(*point) > 10.0) {
        (printf("Too much value"));
        return 0;
    }
    if (isdigit(*point) < 0) {
        (printf("Use positive values"));
        return 0;
    }
}
char* proverka_kruga(char* point)
{
    int r = 0;
    if ((point = proverka_symv(point, '(')) == 0) {
        return 0;
    }
    if ((point = proverka_znach(point, &circle.x)) == 0) {
        return 0;
    } else {
        return point;
    }
    if ((point = proverka_znach(point, &circle.y)) == 0) {
        return 0;
    } else {
        return point;
    }
    if ((point = proverka_symv(point, ',')) == 0) {
        return 0;
    } else {
        return point;
    }
    if ((point = proverka_znach(point, &circle.r)) == 0) {
        return 0;
    } else {
        return point;
    }
    if ((point = proverka_symv(point, ')')) == 0) {
        return 0;
    } else {
        return point;
    }
    Calculations1(r);
    Calculations2(r);
}
