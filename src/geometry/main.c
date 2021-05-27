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

int main()
{
    double r;
    char figure[100];
    char* test_point = figure;
    char* point = figure;

    printf("Vvedite dannye kruga po formatu:");
    printf("'circle' '(' Point ',' Number ')'\n");

    fgets(figure, sizeof(figure), stdin);

    while (isalpha(*point) != 0)
        point++;

    if (strncasecmp(test_point, "circle", 6) == 0) {
        proverka_kruga(point);
    } else {
        printf("Excepted 'circle'\n");
        Calculations1(r);
        Calculations2(r);
    }
}
