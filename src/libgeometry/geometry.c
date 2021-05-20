#include <assert.h>
#include <ctype.h>
#include <libgeometry/geometry.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* Calculations(double r)
{
    int area = 3.14 * pow(r, 2);
    int perimeter = 2 * 3.14 * r;
    if (perimeter && area <= 0)
        return 0;
}
char* proverka_symv(char* point, char symbol)
{
    while (*point != '\n') {
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
    return point;
}

char* proverka_kruga(char* point)
{
    if ((point = proverka_symv(point, '(')) == 0) {
        return 0;
    }

    if ((point = proverka_znach(point, &circle.x)) == 0) {
        return 0;
    }
    if ((point = proverka_znach(point, &circle.y)) == 0) {
        return 0;
    }
    if ((point = proverka_symv(point, ',')) == 0) {
        return 0;
    }
    if ((point = proverka_znach(point, &circle.r)) == 0) {
        return 0;
    }
    if ((point = proverka_symv(point, ')')) == 0) {
        return 0;
    }
}
